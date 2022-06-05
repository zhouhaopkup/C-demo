#include <stdio.h>
#include "io_utils.h"

int main() {
    int a, b;
    int *p = &a;
    PRINT_HEX(p);
    PRINT_HEX(&a);

    PRINT_INT(sizeof(int *));

    PRINT_INT(*p);
    PRINT_INT(a);

    int **pp = &p;
    // *pp => p

    *p = 20;
    PRINT_INT(*p);
    PRINT_INT(a);

    // 一个const指针指向int变量
    int *const cp = &a;
    *cp = 2; // OK
    // cp = &b; ERROR

    // 一个指针指向const变量
    int const *cp2 = &a;
    // *cp2 = 10; ERROR
    cp2 = &b; // OK


    //一个const指针指向const int
    int const *const ccp = &a;
    // *ccp = 2; ERROR
    // ccp = &b; ERROR

    return 0;
}