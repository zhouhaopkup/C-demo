//
// Created by 周昊 on 2022/6/1.
//
#include <stdio.h>

#define MAX(a, b) (a) > (b) ? (a) : (b)

#define IS_HEX_CHARACTER(ch) \
((ch) >= '0' && (ch) <= '9') || \
((ch) >= 'A' && (ch) <= 'F') || \
((ch) >= 'a' && (ch) <= 'f') || \
((ch) >= '0' && (ch) <= '9')


int max(int a, int b) {
    return a > b ? a : b;
}

int main() {
    int max1 = MAX(1, 3);
    int max2 = MAX(1, MAX(3, 4));
    int max3 = max(1, max(3, 4));
    printf("max1: %d\n", max1);
    printf("max2: %d\n", max2);
    printf("max3: %d\n", max3);

    printf("Is a hex character? %d\n", IS_HEX_CHARACTER('A'));
    printf("Is a hex character? %d\n", IS_HEX_CHARACTER('G'));
    printf("Is a hex character? %d\n", IS_HEX_CHARACTER('m'));
    printf("Is a hex character? %d\n", IS_HEX_CHARACTER('9'));

    return 0;
}