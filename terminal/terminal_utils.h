#ifndef TERMINAL_UTILS_H
#define TERMINAL_UTILS_H

void raw_mode();
void x_raw_mode();

const char* red(const char *str);
const char* green(const char *str);
const char* blue(const char *str);

void clear_screen();

#endif
