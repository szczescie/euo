```c
#include <stdint.h>
#include <stdio.h>

typedef uint32_t u32;
typedef uint64_t u64;

#define euo_types u32, u64
#define euo_flags euo_short_names
#include "euo.h"

Opt(u32) downcast(u64 number) {
    if (number > ~(u32)0) return none(u32);
    return some((u32)number);
}

typedef enum { error_overflowed } Error;

Err(u32) add(u32 augend, u32 addend) {
    u32 sum = augend + addend;
    if (sum < augend) return err(u32, error_overflowed);
    return ok(sum);
}

int main() {
    Opt(u32) addend_or_null = downcast(0xfeed);
    u32 addend = absent(addend_or_null) ? 0 : val(addend_or_null);

    Err(u32) sum_or_error = add(0xceed, addend);
    if (failed(sum_or_error)) {
        printf("error code: %d\n", errcode(sum_or_error));
        return 1;
    }

    printf("result: %u\n", val(sum_or_error));
}
```
