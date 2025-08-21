```c
typedef enum : short { err_overflowed } Error;

#define euo_error_type Error
#define euo_types char, short, int, long, float, double, bool
#include "euo.h"

Opt(int) downcast(long number) {
    int max_int = ~(unsigned)0 >> 1;
    if (number > max_int || number < -max_int)
        return null(int);
    return val((int)number);
}

Err(int) add(int augend, int addend) {
    auto sum = augend + addend;
    if (sum < augend)
        return err(int)(err_overflowed);
    return ok(sum);
}

int main() {
    Opt(int) int_or_null = downcast(0xfeed);
    int augend = absent(int_or_null) ? 0 : unwrap(int_or_null);

    Err(int) int_or_error = add(augend, 0xceed);
    if (failed(int_or_error)) {
        printf("addition failed with error code %d\n", check(int_or_error));
        return 1;
    }

    printf("the result is %d\n", unwrap(int_or_error));
}
```
