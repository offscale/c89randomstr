/*
 * Random str function
 * */

#ifndef RANDOMSTR_H
#define RANDOMSTR_H

#include <sys/types.h>

extern const char * generate_random_string(size_t);

#ifdef RANDOMSTR_IMPLEMENTATION

#ifndef RANDOMSTR_CHARSET
#define RANDOMSTR_CHARSET "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789,.-#'?!"
#endif /* !RANDOMSTR_CHARSET */

const char * generate_random_string(const size_t length) {
    static char charset[] = RANDOMSTR_CHARSET;
    char *randomString = NULL;

    if (length) {
        randomString = (char *)(malloc(length + 1));

        if (randomString) {
            size_t l = (int) (sizeof(charset) -1);
            size_t key, n;
            for (n = 0; n < length; n++) {
                key = rand() % l;
                randomString[n] = charset[key];
            }

            randomString[length] = '\0';
        }
    }

    return randomString;
}

#endif /* RANDOMSTR_IMPLEMENTATION */

#endif /* !RANDOMSTR_H */
