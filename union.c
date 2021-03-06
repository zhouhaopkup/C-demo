#include <stdio.h>
#include "io_utils.h"

#define OP_PRINT_INT 0
#define OP_PRINT_DOUBLE 1
#define OP_PRINT_STRING 2

typedef union Operand {
    int int_operand; // 4
    double double_operand; // 8
    char *string_operand; // 8
} Operand;

typedef struct Instruction {
    int operator;
    Operand operand;
} Instruction;

void Process(Instruction *instruction) {
    switch (instruction -> operator) {
        case OP_PRINT_INT:
            PRINT_INT(instruction -> operand.int_operand);
            break;
        case OP_PRINT_DOUBLE:
            PRINT_DOUBLE(instruction -> operand.double_operand);
            break;
        case OP_PRINT_STRING:
            puts(instruction ->operand.string_operand);
            break;
        default:
            fprintf(stderr, "Unsupported operator: %d\n", instruction -> operator);
    }
}

int main() {
//    PRINT_INT(sizeof(Operand));
//
//    Operand operand = {.int_operand = 5, .double_operand = 2.0};
//    PRINT_INT(operand.int_operand); // 因为共用8个字节，值被覆盖了，0
//    PRINT_DOUBLE(operand.double_operand);// 8

    Instruction instruction = {
            .operator = OP_PRINT_STRING,
            .operand = {
                    .string_operand = "Hello World!"
            }
    };

    Process(&instruction);

    return 0;
}