```c
#include <stdio.h>
#include <stdint.h>

typedef uint8_t u8;
typedef uint32_t u32;
typedef uint64_t u64;

#define euo_types u32, u64, bool, u8 const*
#include "euo.h"

[[gnu::const]] static Opt(u32) downcast(u64 number) {
    if (number > ~(u32)0) return none(u32);
    return some((u32)number);
}

typedef enum : u8 { err_overflowed } Error;

[[gnu::const]] static Err(u32) add(u32 augend, u32 addend) {
    auto sum = augend + addend;
    if (sum < augend) return err(u32)(err_overflowed);
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
