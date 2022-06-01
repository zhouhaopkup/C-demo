//
// Created by 周昊 on 2022/6/1.
//
#include <stdio.h>
#include <stdarg.h>

void HandleVarargs(int arg_count, ...) {
    // 1. 定义 va_list 用于获取我们变长参数
    va_list args;

    // 2. 开始遍历
    va_start(args, arg_count);
    for (int i = 0; i < arg_count; ++i) {
        // 3. 取出对应参数，(va_list, type)
        int arg = va_arg(args, int);
        printf("%d: %d\n", i, arg);
    }

    // 4. 结束遍历
    va_end(args);
}

int main(void) {
    HandleVarargs(4, 1,2,3,4);
    return 0;
}