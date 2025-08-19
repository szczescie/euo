```c
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ usage ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //

#define euo_types char, int, long, float, double, bool, char*
#include "euo.h" // default error code type is unsigned short

constexpr unsigned short some_error_code = 1111;

Err(int) returning_an_int_error_union(bool yes) {
    if (yes) return ok(41); // ok infers the type
    return err(int)(some_error_code);
}

Opt(char*) returning_a_string_optional(bool yes) {
    if (yes) return val(":^)"); // same for optionals
    return null(char*);
}

Err() checking_the_results() { // no argument means void
    Err(int) int_or_err = returning_an_int_error_union(true);
    if (failed(int_or_err)) {
        unsigned short error = check(int_or_err);
        return err()(error);
    } else {
        printf("int = %d\n", unwrap(int_or_err));
    }

    Opt(char*) string_or_null = returning_a_string_optional(true);
    char* text = absent(string_or_null) ? "bbbb" : unwrap(string_or_null);

    return ok();
}

Err(int) returning_some_error_union() {
    return returning_an_int_error_union(true); // returning works as expected
}

Err(bool) using_the_try_expression() {
    // try macro unwraps the value or returns the error (from this function)
    printf("value = %d\n", try(bool)(returning_some_error_union()));
    return ok(true);
}
```

```c
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ configuration ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //

typedef enum { overflow, access_denied, unexpected } Error;

#define euo_error_type Error
#define euo_types int, double // currently limited to 255 types
#define euo_flags no_short_names, no_assert, pedantic
#include "euo.h"

euo_Err(double) returning_a_double_error_union() {
    return euo_ok(0.0);
}

euo_Err() assigning_an_optional() {
    auto some_int = euo_null(int);
    auto another_int = euo_val(100);
    some_int = another_int = euo_val(1234);

    // now unwrap will use unreachable() instead of asserting
    printf("int = %d\n", euo_unwrap(some_int));

    // try is not allowed in pedantic mode
    double something = euo_try()(returning_a_double_error_union());

    return euo_ok();
}
```
