//
// Created by 周昊 on 2022/6/3.
//
#include <stdio.h>
#include "io_utils.h"

#define ARRAY_SIZE 10

int global_array[ARRAY_SIZE];

int main() {
    int array[ARRAY_SIZE];
    for(int i = 0; i < ARRAY_SIZE; ++i) {
        array[i] = i;
        PRINT_INT(array[i]);
    }

    int array_2[ARRAY_SIZE] = {0,1,2,3,4,5,6,7,8,9};
    for(int i = 0; i < ARRAY_SIZE; ++i) {
        PRINT_INT(array_2[i]);
    }

    double array_double[5] = {0.1, 2.3};
    for(int i = 0; i < 5; ++i) {
        PRINT_DOUBLE(array_double[i]);
    }

    char array_char[5] = { [2] = 'o', 'p', 'q'};
    for(int i = 0; i < 5; ++i) {
        PRINT_CHAR(array_char[i]);
    }

    for(int i = 0; i < ARRAY_SIZE; ++i) {
        PRINT_HEX(global_array[i]);
    }

    return 0;
}

