#include <greatest.h>

#define RANDOMSTR_IMPLEMENTATION
#define RANDOMSTR_INSECURE
#include <randomstr.h>

TEST x_randomstr_should_succeed(void) {
    const char *rand_str = generate_random_string(20);
    ASSERT_EQ(strlen(rand_str), 20);
    {
        const char *rand_str_ptr = rand_str;
        int any_inequal = 0;
        while(rand_str_ptr != NULL) {
            const char *prev_str_ptr = rand_str_ptr;
            if (prev_str_ptr != ++rand_str_ptr) {
                any_inequal++;
                break;
            }
        }
        ASSERT_EQ(any_inequal, 1);
    }
    PASS();
}

SUITE(randomstr_suite) {
    RUN_TEST(x_randomstr_should_succeed);
}
