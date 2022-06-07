#include "io_utils.h"
#include <time.h>
#include "time_utils.h"

int main() {
    long_time_t current_time_in_ms = TimeInMillisecond();
    int current_time_millisecond = current_time_in_ms % 1000;

    time_t current_time;
    time(&current_time);
    PRINT_LLONG(current_time); // 1654567132
    struct tm *calendar_time = localtime(&current_time);

    puts(asctime(calendar_time)); // Tue Jun  7 09:58:52 2022
    puts(ctime(&current_time));// Tue Jun  7 09:58:52 2022

    // 2020-11-09 08:13:37
    char current_time_s[20];
    // size_t size = strftime(current_time_s, 20, "%Y-%m-%d %H:%M:%S", calendar_time);
    size_t size = strftime(current_time_s, 20, "%F %T", calendar_time);
    // PRINT_INT(size);
    puts(current_time_s);

    // 20201109081337
    size_t size2 = strftime(current_time_s, 20, "%Y%m%d%H%M%S", calendar_time);
    puts(current_time_s);

    // 20201109081337 + 毫秒数
    size_t size3 = strftime(current_time_s, 20, "%Y%m%d%H%M%S", calendar_time);
    sprintf(current_time_s + 14, "%03d", current_time_millisecond);
    puts(current_time_s);


    return 0;
}

