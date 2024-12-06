#include <termios.h>
#include <unistd.h>
#include "terminal_utils.h"

void raw_mode() {
    struct termios term;
    tcgetattr(STDIN_FILENO, &term);
    term.c_lflag &= ~(ICANON | ECHO);
    tcsetattr(STDIN_FILENO, TCSANOW, &term);
}

void x_raw_mode() {
    struct termios term;
    tcgetattr(STDIN_FILENO, &term);
    tcsetattr(STDIN_FILENO, TCSANOW, &term);
}
