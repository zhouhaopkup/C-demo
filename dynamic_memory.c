#include <stdio.h>
#include <stdlib.h>
#include "io_utils.h"

#define PLAYER_COUNT 10

// main运行会报错
//void InitPointer(int *ptr, int length, int default_value) { // 函数内修改指针指向的变量对外面的指针没有影响  形参 实参
//    ptr = malloc(sizeof(int) * length);
//    for(int i = 0; i < length; ++i) {
//        ptr[i] = default_value;
//    }
//}

// OK
void InitPointer(int **ptr, int length, int default_value) {
    *ptr = malloc(sizeof(int) * length);
    for(int i = 0; i < length; ++i) {
        (*ptr)[i] = default_value;
    }
}

int main() {
//    int *players = malloc(sizeof(int) * PLAYER_COUNT);
//    for(int i = 0; i < PLAYER_COUNT; ++i) {
//        players[i] = i;
//    }
//    PRINT_INT_ARRAY(players, PLAYER_COUNT);
//    free(players);

    int *players;

    //InitPointer(players, PLAYER_COUNT, 0); 会报错

    // OK
//    InitPointer(&players, PLAYER_COUNT, 0);
//    PRINT_INT_ARRAY(players, PLAYER_COUNT);

    players = calloc(PLAYER_COUNT, sizeof(int));
    PRINT_INT_ARRAY(players, PLAYER_COUNT);

    players = realloc(players, PLAYER_COUNT * 2 * sizeof(int));
    PRINT_INT_ARRAY(players, PLAYER_COUNT * 2);

    if(players) {
        free(players);
    } else {

    }

    // 常见的指针使用错误: 忘记在使用后释放内存 使用了已经释放的内存 使用了超出边界的内存 改变内存的指针导致无法正常释放
    // 避免修改指向已分配的内存的指针 对于free之后的指针主动置为NULL 避免将过多的指针指向动态分配的内存 动态内存遵从谁分配谁释放的原则

    return 0;
}