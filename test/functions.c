#include <assert.h>
#include <stdint.h>

typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef uint64_t u64;
typedef struct {
    u64 len;
    char const* buf;
} Str;

#define euo_types u32, u64, u8, char const*, u16*
#define euo_flags euo_short_names
#include "../src/euo.h"

#define euo_types bool, Str, u32, int, double
#include "../src/euo.h"

static Err(void) tests() {
    { // data validation: structure size
        static_assert(sizeof(Err(u64)) == 2 * sizeof(u64));
        static_assert(sizeof(Opt(u16*)) == 2 * sizeof(u16*));
        static_assert(sizeof(Err(Opt(u32))) == sizeof(Err(u32)));
    }
    { // data validation: error union, succeeded
        Err(u32) const u32_or_err = ok((u32)0xaaaaaaa);
        assert(!failed(u32_or_err));
        assert(val(u32_or_err) == 0xaaaaaaa);
        Err(void) const void_or_err = ok();
        assert(!failed(void_or_err));
    }
    { // data validation: error union, failed
        Err(u64) const u64_or_err = err(u64, 404);
        assert(failed(u64_or_err));
        assert(errcode(u64_or_err) == 404);
        Err(void) const void_or_err = err(void, 404);
        assert(failed(void_or_err));
    }
    { // data validation: error union, try
        double const value = try(void, ok(1.0));
        assert(value == 1.0);
    }
    { // data validation: optional, present
        Opt(u8) const u8_or_null = some((u8)0xb);
        assert(!absent(u8_or_null));
        assert(val(u8_or_null) == (u8)0xb);
        Opt(void) const void_or_null = some();
        assert(!absent(void_or_null));
    }
    { // data validation: optional, absent
        Opt(u16*) const u16_ptr_or_null = none(u16*);
        assert(absent(u16_ptr_or_null));
        Opt(void) const void_or_null = none(void);
        assert(absent(void_or_null));
    }
    { // data validation: error union optional, succeded + present
        Err(Opt(u32)) const u32_or_null_or_err = ok(some((u32)0xaaaaaaa));
        assert(!failed(u32_or_null_or_err));
        Opt(u32) const u32_or_null = val(u32_or_null_or_err);
        assert(!absent(u32_or_null));
        assert(val(u32_or_null) == 0xaaaaaaa);
        Err(Opt(void)) const void_or_null_or_err = ok(some());
        assert(!failed(void_or_null_or_err));
        Opt(void) const void_or_null = val(void_or_null_or_err);
        assert(!absent(void_or_null));
    }
    { // data validation: error union optional, succeded + absent
        Err(Opt(u64)) const u64_or_null_or_err = ok(none(u64));
        assert(!failed(u64_or_null_or_err));
        Opt(u64) const u64_or_null = val(u64_or_null_or_err);
        assert(absent(u64_or_null));
        Err(Opt(void)) const void_or_null_or_err = ok(none(void));
        assert(!failed(void_or_null_or_err));
        Opt(void) const void_or_null = val(void_or_null_or_err);
        assert(absent(void_or_null));
    }
    { // data validation: error union optional, failed
        Err(Opt(char const*)) str_or_null_or_err = err(Opt(char const*), 503);
        assert(failed(str_or_null_or_err));
        Err(Opt(void)) void_or_null_or_err = err(Opt(void), 503);
        assert(failed(void_or_null_or_err));
    }
    { // data validation: error union optional, try
        Opt(double) const double_or_null = try(void, ok(some(2.0)));
        double const value = val(double_or_null);
        assert(value == 2.0);
    }
    { // type checking: assignment, int
        [[maybe_unused]] Err(int) const a = ok(0);
        [[maybe_unused]] Err(int) const b = err(int, 1);
        [[maybe_unused]] Err(Opt(int)) const c = ok(none(int));
        [[maybe_unused]] Err(Opt(int)) const d = err(Opt(int), 12);
        [[maybe_unused]] Opt(int) const e = some(0);
        [[maybe_unused]] Opt(int) const f = none(int);
        [[maybe_unused]] bool const g = failed(ok(0));
        [[maybe_unused]] bool const h = failed(ok(none(int)));
        [[maybe_unused]] bool const i = absent(none(int));
        [[maybe_unused]] int const j = val(ok(0));
        [[maybe_unused]] Opt(int) const k = val(ok(some(0)));
        [[maybe_unused]] int const l = val(some(0));
        [[maybe_unused]] unsigned int const m = errcode(err(int, 12));
        [[maybe_unused]] unsigned int const n = errcode(err(Opt(int), 1));
    }
    { // type checking: assignment, void
        [[maybe_unused]] Err(void) const a = ok((void)0);
        [[maybe_unused]] Err(void) const b = err(void, 1);
        [[maybe_unused]] Err(Opt(void)) const c = ok(none(void));
        [[maybe_unused]] Err(Opt(void)) const d = err(Opt(void), 12);
        [[maybe_unused]] Opt(void) const e = some((void)0);
        [[maybe_unused]] Opt(void) const f = none(void);
        [[maybe_unused]] bool const g = failed(ok((void)0));
        [[maybe_unused]] bool const h = failed(ok(none(void)));
        [[maybe_unused]] bool const i = absent(none(void));
        [[maybe_unused]] void* const j = (typeof(val(ok((void)0)))*){};
        [[maybe_unused]] Opt(void) const k = val(ok(some((void)0)));
        [[maybe_unused]] void* const l = (typeof(val(some((void)0)))*){};
        [[maybe_unused]] unsigned int const m = errcode(err(void, 12));
        [[maybe_unused]] unsigned int const n = errcode(err(Opt(void), 1));
    }
    { // type checking: comma
        [[maybe_unused]] auto const a = ok((int[]){ 0, 1 }[1]);
        [[maybe_unused]] auto const b = err(int, (unsigned int[]){ 0, 1 }[1]);
        [[maybe_unused]] auto const c = some((int[]){ 0, 1 }[1]);
        [[maybe_unused]] auto const d = failed((Err(int)[]){ ok(0), ok(1) }[1]);
        [[maybe_unused]] auto const e = failed((Err(int)[]){ ok(0), ok(1) }[1]);
        [[maybe_unused]] auto const f =
            absent((Opt(int)[]){ some(0), some(1) }[1]);
        [[maybe_unused]] auto const g =
            val((Err(int)[]){ ok(0), ok(1) }[1]);
        [[maybe_unused]] auto const h =
            errcode((Err(int)[]){ err(int, 0), err(int, 1) }[1]);
        [[maybe_unused]] auto const i =
            try(void, (Err(int)[]){ ok(0), ok(1) }[1]);
    }
    return ok();
}

int main() {
    if (failed(tests())) return 1;
    return 0;
}
