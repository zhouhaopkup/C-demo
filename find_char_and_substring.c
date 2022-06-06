#include <stdio.h>
#include <string.h>
#include "io_utils.h"

int main() {
    char *string = "Hello World!";

    char *result = strchr(string, 'l'); // 从头开始查
    char *result_reverse = strrchr(string, 'l'); // 反过来查

    puts(result); // llo World!
    puts(result_reverse);// ld!

    char *string2 = "C, 1972; C++, 1983; Java, 1995; Rust, 2010; Kotlin, 2011";
    char *break_set = ",;";

    int count = 0;
    char *p = string2;

    do {
        p = strpbrk(p, break_set);
        if(p) {
            puts(p);
            p++;
            count++;
        }
    } while(p);

    PRINTLNF("Found %d characters.", count);

    char *substring_position = strstr(string, "Wor");
    PRINT_INT(substring_position - string);

    return 0;
}
