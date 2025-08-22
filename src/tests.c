#include <assert.h>
#include <stdint.h>

typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef uint64_t u64;

#define euo_error_type u32
#define euo_types u32, u64, u8, u8 const*, u16*, bool
#include "euo.h"

static Err(u64) err_union() {
    static_assert(sizeof(Err(u64)) == 2 * sizeof(u64));
    {
        Err(u32) const u32_or_err = ok((u32)0xaaaaaaa);
        bool const failure = failed(u32_or_err);
        assert(!failure);
        u64 const unwrapped = val(u32_or_err);
        assert(unwrapped == 0xaaaaaaa);
    }
    {
        Err(u64) const u64_or_err = err(u64)(404);
        assert(failed(u64_or_err));
        u32 const error_code = errcode(u64_or_err);
        assert(error_code == 404);
        return u64_or_err;
    }
}

static Opt(u16*) optional() {
    static_assert(sizeof(Err(u16*)) == 2 * sizeof(u16*));
    {
        Opt(u8) const u8_or_null = some((u8)0xb);
        bool const absence = absent(u8_or_null);
        assert(!absence);
        u8 const unwrapped = val(u8_or_null);
        assert(unwrapped == (u8)0xb);
    }
    {
        Opt(u16*) const u16_ptr_or_null = none(u16*);
        bool const absence = absent(u16_ptr_or_null);
        assert(absence);
        return u16_ptr_or_null;
    }
}

static Err(Opt(u8 const*)) err_optional() {
    static_assert(sizeof(Err(Opt(u8 const*))) == sizeof(Err(u8 const*)));
    {
        Err(Opt(u32)) const u32_or_null_or_err = ok(some((u32)0xaaaaaaa));
        bool const failure = failed(u32_or_null_or_err);
        assert(!failure);
        Opt(u32) const u32_or_null = val(u32_or_null_or_err);
        bool const absence = absent(u32_or_null);
        assert(!absence);
        u32 const unwrapped = val(u32_or_null);
        assert(unwrapped == 0xaaaaaaa);
    }
    {
        Err(Opt(u64)) const u64_or_null_or_err = ok(none(u64));
        bool const failure = failed(u64_or_null_or_err);
        assert(!failure);
        Opt(u64) const u64_or_null = val(u64_or_null_or_err);
        bool const absence = absent(u64_or_null);
        assert(absence);
    }
    {
        Err(Opt(u8 const*)) str_or_null_or_err = err(Opt(u8 const*))(503);
        bool const failure = failed(str_or_null_or_err);
        assert(failure);
        return str_or_null_or_err;
    }
}

static Err(bool) err_union_try() {
    u32 const number = __extension__ try(bool)(ok((u32)0xaaaaaaa));
    assert(number == 0xaaaaaaa);
    (void)__extension__ try(bool)(err_union());
    assert(false);
}

static Err() err_union_void() {
    return true ? ok() : err()(1);
}

static Opt() optional_void() {
    return true ? some() : none();
}

static Err(Opt()) err_optional_void() {
    return true ? ok(some()) : ok(none());
}

static Err() err_union_try_void() {
    [[maybe_unused]] auto const _ = __extension__ try()(ok());
    return ok();
}

int main() {
    (void)err_union();
    (void)optional();
    (void)err_optional();
    (void)err_union_void();
    (void)optional_void();
    (void)err_optional_void();
    (void)err_union_try();
    (void)err_union_try_void();
}
