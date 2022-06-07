#include <stdio.h>
#include <string.h>
#include "io_utils.h"

int main() {
//    char src[] = "HelloWorld";
//    char dest[20] = "C said: ";
//    strcat(dest, src);
//    puts(dest);

    char src[] = "HelloWorld";
    char dest[20] = "C said: ";
    strcpy(dest + strlen(dest), src);
    puts(dest);

    return 0;
}