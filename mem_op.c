#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "io_utils.h"

int main() {
    // 区别在于字符串有null，知道在哪里结束，不用传入size
    // memchr()
    // strchr()

    // memcmp()
    // strcmp()

    // memset()

    char *mem = malloc(10);
    memset(mem, 0, 10);

    PRINT_INT_ARRAY(mem, 10);
    free(mem);

    // memcpy
    // strcpy

    // memmove()
    char src[] = "HelloWorld";
    char *dest = malloc(11);
    memset(dest, 0, 11);

    memcpy(dest, src, 11);

    puts(dest); // HelloWorld

    memmove(dest + 3, dest + 1, 4);

    puts(dest); // Helellorld

    free(dest);

    return 0;
}