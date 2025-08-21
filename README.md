```c
typedef enum : u16 { err_overflowed } Error;

#define euo_error_type Error
#define euo_types u16, u32, u64, bool
#include "euo.h"

Opt(u32) downcast(u64 number) {
    if (number > ~(u32)0)
        return null(u32);
    return val((u32)number);
}

Err(u32) add(u32 augend, u32 addend) {
    auto sum = augend + addend;
    if (sum < augend)
        return err(u32)(err_overflowed);
    return ok(sum);
}

int main() {
    Opt(u32) number_or_null = downcast(0xfeed);
    u32 augend = absent(number_or_null) ? 0 : unwrap(number_or_null);

    Err(u32) number_or_error = add(augend, 0xceed);
    if (failed(number_or_error)) {
        printf("addition failed with error code %u\n", check(number_or_error));
        return 1;
    }

    printf("the result is %u\n", unwrap(number_or_error));
}
```
