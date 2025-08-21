#include "assert.h"

#define euo_error_type unsigned int
#define euo_types int, long, char const*, short*, bool
#include "euo.h"

#define cat_inner(a, b) a##b
#define cat(a, b) _euo_cat_inner(a, b)
#define do_not_optimise_away(...) \
    [[maybe_unused]] auto const volatile cat(_, __COUNTER__) = (__VA_ARGS__)

[[gnu::const]] static Err(long) err_union() {
    static_assert(sizeof(Err(long)) == 2 * sizeof(long));
    {
        Err(int) const int_or_err = ok(-0xaaaaaaa);
        bool const failure = failed(int_or_err);
        assert(!failure);
        long const unwrapped = unwrap(int_or_err);
        assert(unwrapped == -0xaaaaaaa);
    }
    {
        Err(long) const long_or_err = err(long)(404);
        assert(failed(long_or_err));
        unsigned int const error_code = check(long_or_err);
        assert(error_code == 404);
        return long_or_err;
    }
}

[[gnu::const]] static Opt(short*) optional() {
    static_assert(sizeof(Err(short*)) == 2 * sizeof(short*));
    {
        Opt(char const*) const str_or_null = val((char const*){ "aaaaaaa" });
        bool const absence = absent(str_or_null);
        assert(!absence);
        char const* const unwrapped = unwrap(str_or_null);
        assert(unwrapped == (char const*){ "aaaaaaa" });
    }
    {
        Opt(short*) const short_ptr_or_null = null(short*);
        bool const absence = absent(short_ptr_or_null);
        assert(absence);
        return short_ptr_or_null;
    }
}

[[gnu::const]] static Err(Opt(char const*)) err_optional() {
    static_assert(sizeof(Err(Opt(char const*))) == sizeof(Err(char const*)));
    {
        Err(Opt(int)) const int_or_null_or_err = ok(val(0xaaaaaaa));
        bool const failure = failed(int_or_null_or_err);
        assert(!failure);
        Opt(int) const int_or_null = unwrap(int_or_null_or_err);
        bool const absence = absent(int_or_null);
        assert(!absence);
        int const unwrapped = unwrap(int_or_null);
        assert(unwrapped == 0xaaaaaaa);
    }
    {
        Err(Opt(long)) const long_or_null_or_err = ok(null(long));
        bool const failure = failed(long_or_null_or_err);
        assert(!failure);
        Opt(long) const long_or_null = unwrap(long_or_null_or_err);
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

[[gnu::const]] static Err(bool) err_union_try() {
    int const number = __extension__ try(bool)(ok(0xaaaaaaa));
    assert(number == 0xaaaaaaa);
    [[maybe_unused]] long const _ = __extension__ try(bool)(err_union());
    assert(false);
}

[[gnu::const]] static Err() err_union_void() {
    return true ? ok() : err()(1);
}

[[gnu::const]] static Opt() optional_void() {
    return true ? val() : null();
}

[[gnu::const]] static Err(Opt()) err_optional_void() {
    return true ? ok(val()) : ok(null());
}

[[gnu::const]] static Err() err_union_try_void() {
    [[maybe_unused]] auto const _ = __extension__ try()(ok());
    return ok();
}

int main() {
    do_not_optimise_away(err_union());
    do_not_optimise_away(optional());
    do_not_optimise_away(err_optional());
    do_not_optimise_away(err_union_void());
    do_not_optimise_away(optional_void());
    do_not_optimise_away(err_optional_void());
    do_not_optimise_away(err_union_try());
    do_not_optimise_away(err_union_try_void());
}
