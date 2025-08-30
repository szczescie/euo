#include <stdarg.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

typedef uint64_t u64;

[[gnu::const]] static u64 parse_int(
    register char const* restrict string
) {
    u64 result;
    if (sscanf(string, "%lu", &result) < 0) exit(1);
    return result;
}

[[gnu::format(printf, 1, 2)]] static void print(
    char const* format,
    ...
) {
    va_list args;
    va_start(args, format);
    if (vprintf(format, args) < 0) exit(1);
    va_end(args);
}

constexpr auto max_item_len = 32;

[[gnu::format(printf, 2, 3)]] static u64 buf_print(
    register char* restrict buf,
    char const* format,
    ...
) {
    va_list args;
    va_start(args, format);
    register auto const bytes_printed =
        vsnprintf(buf, max_item_len, format, args);
    if (bytes_printed < 0) exit(1);
    va_end(args);
    return (u64)bytes_printed;
}

constexpr auto max_line_len = 80;

static u64 print_item(
    register char const* restrict item,
    register u64 const line_len,
    register u64 const item_len
) {
    auto const new_line_len = line_len + item_len;
    if (new_line_len > max_line_len - 1) {
        print("\\\n    %s", item);
        return 4 + item_len;
    }
    print("%s", item);
    return new_line_len;
}

int main(
    register int const argc,
    register char const* const argv[]
) {
    if (argc != 2) exit(1);
    auto const map_arity = parse_int(argv[1]);
    char item[max_item_len] = {};
    u64 line_len = {};

    print("#define _euo_arity_inner( \\\n    ");
    line_len = 4;
    for (u64 i = 0; i <= map_arity; i += 1) {
        auto const item_len = buf_print(item, "_%lu, ", i);
        line_len = print_item(item, line_len, item_len);
    }
    print("count, ... \\\n) count\n");

    print(
        "#define _euo_arity(...) _euo_arity_inner( \\\n"
        "    __VA_OPT__(, ) __VA_ARGS__, "
    );
    line_len = 32;
    for (u64 i = map_arity; i >= 1; i -= 1) {
        auto const item_len = buf_print(item, "%lu, ", i);
        line_len = print_item(item, line_len, item_len);
    }
    print("0 \\\n)\n\n");

    print(
        "#define _euo_map_0(_, __)\n"
        "#define _euo_map_1(f, x) f(0, x)\n"
    );
    for (u64 i = 2; i <= map_arity; i += 1) print(
        "#define _euo_map_%lu(f, x, ...)"
        " _euo_map_%lu(f, __VA_ARGS__) f(%lu, x)\n",
        i, i - 1, i - 1
    );

    return 0;
}
