//
// Created by 周昊 on 2022/6/1.
//

#ifdef __cplusplus
extern "C" {
#endif
    // .........
    int add(int left, int right);
#ifdef __cplusplus
};
#endif

/**
 * 1. #ifdef  如果定义了
 * 2. #ifndef  如果没定义
 * 3. #if  如果...
 *
 * #endif
 *
 * #if defined(MACRO)  ==> #ifdef MACRO
 */
#include <stdio.h>

void dump(char *message) {
#ifdef DEBUG
    puts(message);
#endif
}

int main() {
    dump("main start.");

    printf("Hello World!\n");

    dump("main end.");

    printf("__STDC_VERSION__: %ld\n", __STDC_VERSION__);

#if __STDC_VERSION__ >= 201112
    puts("C11!!");
#elif __STDC_VERSION__ >= 199901
    puts("C99!!");
#else
    puts("maybe C90?");
#endif

    return 0;
}


