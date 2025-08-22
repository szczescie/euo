#include "assert.h"

#define euo_error_type unsigned int
#define euo_types int, long, char const*, short*, bool
#include "euo.h"

static Err(long) err_union() {
    static_assert(sizeof(Err(long)) == 2 * sizeof(long));
    {
        Err(int) const int_or_err = ok(-0xaaaaaaa);
        bool const failure = failed(int_or_err);
        assert(!failure);
        long const unwrapped = val(int_or_err);
        assert(unwrapped == -0xaaaaaaa);
    }
    {
        Err(long) const long_or_err = err(long)(404);
        assert(failed(long_or_err));
        unsigned int const error_code = errcode(long_or_err);
        assert(error_code == 404);
        return long_or_err;
    }
}

static Opt(short*) optional() {
    static_assert(sizeof(Err(short*)) == 2 * sizeof(short*));
    {
        Opt(char const*) const str_or_null = some((char const*){ "aaaaaaa" });
        bool const absence = absent(str_or_null);
        assert(!absence);
        char const* const unwrapped = val(str_or_null);
        assert(unwrapped == (char const*){ "aaaaaaa" });
    }
    {
        Opt(short*) const short_ptr_or_null = none(short*);
        bool const absence = absent(short_ptr_or_null);
        assert(absence);
        return short_ptr_or_null;
    }
}

static Err(Opt(char const*)) err_optional() {
    static_assert(sizeof(Err(Opt(char const*))) == sizeof(Err(char const*)));
    {
        Err(Opt(int)) const int_or_null_or_err = ok(some(0xaaaaaaa));
        bool const failure = failed(int_or_null_or_err);
        assert(!failure);
        Opt(int) const int_or_null = val(int_or_null_or_err);
        bool const absence = absent(int_or_null);
        assert(!absence);
        int const unwrapped = val(int_or_null);
        assert(unwrapped == 0xaaaaaaa);
    }
    {
        Err(Opt(long)) const long_or_null_or_err = ok(none(long));
        bool const failure = failed(long_or_null_or_err);
        assert(!failure);
        Opt(long) const long_or_null = val(long_or_null_or_err);
        bool const absence = absent(long_or_null);
        assert(absence);
    }
    {
        Err(Opt(char const*)) str_or_null_or_err = err(Opt(char const*))(503);
        bool const failure = failed(str_or_null_or_err);
        assert(failure);
        return str_or_null_or_err;
    }
}

static Err(bool) err_union_try() {
    int const number = __extension__ try(bool)(ok(0xaaaaaaa));
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
