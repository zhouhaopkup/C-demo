//
// Created by 周昊 on 2022/6/1.
//
#include <stdio.h>
#include <stdarg.h>

void Printlnf(const char* format, ...) {
    va_list args;
    va_start(args, format);

    vprintf(format, args);
    printf("\n");

    va_end(args);
}

// "Hello ""world" ==> "Hello world"
// __FILE__
// __LINE__
// __FUNCTION__
// (../05.printlnf.c:20) main:

#define PRINTLNF(format, ...) printf(format"\n", ##__VA_ARGS__)

#define PRINTLNFFile(format, ...) printf("("__FILE__":%d) %s : "format"\n",__LINE__, __FUNCTION__, ##__VA_ARGS__)

#define PRINT_INT(value) PRINTLNF(#value": %d", value)

int main() {
    int value1 = 1;

    Printlnf("Hello World1: %d", value1);
    Printlnf("Hello World2");
    PRINTLNF("Hello zhouhao1: %d", value1);
    PRINTLNF("Hello Zhouhao2");

    int x = 3;
    PRINT_INT(x);
    PRINT_INT(3 + 4);

    PRINTLNFFile("Hello World1: %d", value1);
    PRINTLNFFile("Hello World2");
    PRINTLNFFile("Hello zhouhao1: %d", value1);
    PRINTLNFFile("Hello Zhouhao2");

    return 0;
}
