#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS 1
#endif /* _MSC_VER */

#include <greatest.h>

#include "test_randomstr.h"

GREATEST_MAIN_DEFS();

int main(int argc, char **argv) {
    GREATEST_MAIN_BEGIN();
    RUN_SUITE(randomstr_suite);
    GREATEST_MAIN_END();
}
