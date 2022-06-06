#include <stdio.h>
#include "io_utils.h"

int *pointer_at_large; // 野指针

void DangerousPointer() {
    int a = 2; // 自动变量a在函数执行完就被销毁了
    pointer_at_large = &a;

    // ......

    // 注意避免产生野指针
    pointer_at_large = NULL;
}

int main() {
    // 不要将硬编码赋值给指针
    // int *p = (int *)0x64;
    // PRINT_INT(p);
    // PRINT_INT(*p); ERROR
    // PRINT_HEX(p);

    // 空指针NULL的用法
    int *p = NULL;
    // *p = 3; ERROR
    if(p) {

    }

    DangerousPointer();
    if(pointer_at_large) {
        PRINT_INT(*pointer_at_large);
    }

    return 0;
}
