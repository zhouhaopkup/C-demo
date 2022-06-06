#include <stdio.h>
#include "io_utils.h"

int SumIntArray(int array[], int length) {
    int sum = 0;
    for(int i = 0; i < length; ++i) {
        sum += array[i];
    }
    return sum;
}

void SumIntArray2(int array[], int length, int *sum) {
    *sum = 0;
    for(int i = 0; i < length; ++i) {
        *sum += array[i];
    }
}

__int128 TestBigInt() {
    return 0;
}

typedef struct {
    char *name;
    int gender;
    int age;
    char *school_name;
} Student;

Student TestStruct() {
    Student student = {"lisi", 1, 30, "PKU"};
    return student;
}

int main() {
    int array[] = {0,1,2,3,4};
    int sum = SumIntArray(array, 5);
    PRINT_INT(sum);

    // 使用指针参数作为函数返回值: 避免函数返回值带来的开销、实现函数的多个返回值的目的
    int sum2;
    SumIntArray2(array, 5, &sum2);
    PRINT_INT(sum2);

    __int128 big_int = TestBigInt();

    Student student = TestStruct();




    return 0;
}
