#include <stdio.h>
#include "io_utils.h"

int main() {
    int a;
    scanf("%d", &a);
    int *p = &a;
    PRINT_HEX(p);
    PRINT_INT(sizeof(int *));
    PRINT_INT(*p);

    int **pp=&p;
    // *pp => p

    return 0;
}