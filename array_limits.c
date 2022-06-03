#include <stdio.h>
#include <io_utils.h>

#define ARRAY_SIZE 5

int main() {
    int array[ARRAY_SIZE];
    PRINT_INT(array[0]);
    // array[4] => array + 4
    PRINT_INT(array[4]);

    int array_with_expression[3 + 2];

    int value = 2;
    // C99 变长数组VLA; gcc ok; MSVC ERROR
    int arr_size_of_value[value];

    const int kSize = 5; // C++ OK
    int array_size_of_const[kSize]; // C99 变长数组VLA; gcc ok; MSVC ERROR

    return 0;
}
