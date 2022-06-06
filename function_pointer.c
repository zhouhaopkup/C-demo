#include <stdio.h>
#include <stdlib.h>
#include "io_utils.h"

int *(f1(int, double));

int (*f2)(int, double);

int *(*f3)(int, double);

int (*f4[])(int, double);

typedef int (*Func)(int, double);

int Add(int x, double y) {
    return (int)(x + y);
}

typedef int Boolean;
typedef int *IntPtr;
typedef int IntArray[];

void InitPointer(int **ptr, int length, int default_value) {
    *ptr = malloc(sizeof(int) * length);
    for (int i = 0; i < length; ++i) {
        (*ptr)[i] = default_value;
    }
}

int main() {
    int a;
    int *p;
    PRINT_HEX(&main);
    PRINT_HEX(&InitPointer);

    void (*func)(int **ptr, int length, int default_value) = &InitPointer;
    func(&p, 10, 0);
    PRINT_INT_ARRAY(p, 10);

    (*func)(&p, 10, 20);
    PRINT_INT_ARRAY(p, 10);

    (*InitPointer)(&p, 10, 30);
    PRINT_INT_ARRAY(p, 10);

    Func func1 = &Add;
    int result = func1(1, 3.0);
    PRINT_INT(result);


    free(p);

    IntPtr q;
    IntArray players = {1,2,3,4,5};

    return 0;
}