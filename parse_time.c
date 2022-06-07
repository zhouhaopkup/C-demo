#define _XOPEN_SOURCE

#include "io_utils.h"
#include <time.h>
#include "time_utils.h"

int main() {
//    long_time_t current_time_in_ms = TimeInMillisecond();
//    int current_time_millisecond = current_time_in_ms % 1000;
//
//    time_t current_time;
//    time(&current_time);
//    struct tm *calendar_time = localtime(&current_time);

    // 2020-11-09 08:13:37
//    char current_time_s[20];
//    strftime(current_time_s, 20, "%F %T", calendar_time);
//    puts(current_time_s);

    char *time = "2020-11-10 06:30:32.123";
    struct tm parsed_time;
    // char *unparsed_string = strptime(current_time_s, "%F %T", &parsed_time);
//    char *unparsed_string = strptime(time, "%F %T", &parsed_time);
//    PRINT_INT(parsed_time.tm_year);
//    PRINT_INT(parsed_time.tm_mon);
//    PRINT_INT(parsed_time.tm_mday);
//    PRINT_INT(parsed_time.tm_hour);
//    PRINT_INT(parsed_time.tm_min);
//    PRINT_INT(parsed_time.tm_sec);
//    puts(unparsed_string);
//
//    int millisecond;
//    sscanf(unparsed_string, ".%3d", &millisecond);
//    PRINT_INT(millisecond);

    int millisecond;
    sscanf(time, "%4d-%2d-%2d %2d:%2d:%2d.%3d",
           &parsed_time.tm_year,
           &parsed_time.tm_mon,
           &parsed_time.tm_mday,
           &parsed_time.tm_hour,
           &parsed_time.tm_min,
           &parsed_time.tm_sec,
           &millisecond);
    parsed_time.tm_year -= 1900;
    parsed_time.tm_mon -= 1;

    mktime(&parsed_time);

    PRINT_INT(parsed_time.tm_year);
    PRINT_INT(parsed_time.tm_mon);
    PRINT_INT(parsed_time.tm_mday);
    PRINT_INT(parsed_time.tm_hour);
    PRINT_INT(parsed_time.tm_min);
    PRINT_INT(parsed_time.tm_sec);

    return 0;
}

