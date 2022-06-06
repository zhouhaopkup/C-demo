#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "io_utils.h"

void SwapInt(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void Swap(void *first, void *second, size_t size) {
    void *temp = malloc(size);
    if (temp) {
        memcpy(temp, first, size);
        memcpy(first, second, size);
        memcpy(second, temp, size);

        free(temp);
    } else {
    }
}

#define SWAP(a, b, type) { type temp = a; a = b; b = temp; }

// msvc c++ decltype(a)
#define SWAP_EXT(a, b) do { typeof(a) temp = a; a = b; b = temp; } while(0)

int main() {
    int a = 1;
    int b = 2;
    double x = 3.0;
    double y = 4.0;
//    SwapInt(&a, &b);

//    Swap(&a, &b, sizeof(int));
//    Swap(&x, &y, sizeof(double));
//    PRINT_INT(a);
//    PRINT_INT(b);
//    PRINT_DOUBLE(x);
//    PRINT_DOUBLE(y);

//    int m = 5;
//    int n = 6;
//    double u = 7.0;
//    double v = 8.0;
//    SWAP(m, n, int);
//    SWAP(u, v, double);
//
//    PRINT_INT(m);
//    PRINT_INT(n);
//    PRINT_DOUBLE(u);
//    PRINT_DOUBLE(v);

    int m = 5;
    int n = 6;
    double u = 7.0;
    double v = 8.0;
    SWAP_EXT(m, n); // gcc OK; msvc ERROR
    SWAP_EXT(u, v);

//    if(a) SWAP2(a, b); else {
//        puts("no swap.");
//    }

    PRINT_INT(m);
    PRINT_INT(n);
    PRINT_DOUBLE(u);
    PRINT_DOUBLE(v);
    return 0;
}