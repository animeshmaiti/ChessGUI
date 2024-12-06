#include <stdio.h>
#include <string.h>
#include "terminal_utils.h"

const char* red(const char *str) {
    static char coloredStr[1024]; 
    snprintf(coloredStr, sizeof(coloredStr), "\033[1;31m%s\033[0m", str); 
    return coloredStr;
}

const char* green(const char *str) {
    static char coloredStr[1024]; 
    snprintf(coloredStr, sizeof(coloredStr), "\033[1;32m%s\033[0m", str); 
    return coloredStr;
}

const char* blue(const char *str) {
    static char coloredStr[1024];
    snprintf(coloredStr, sizeof(coloredStr), "\033[38;2;42;123;222m%s\033[0m", str);
    return coloredStr;
}

void clear_screen() {
    static char transparent[1024] = "\033[H\033[2J";
    printf("%s", transparent);
}