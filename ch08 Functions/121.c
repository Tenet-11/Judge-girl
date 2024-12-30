#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "ASCII.h"

char ascii(char sign, int num, char msg) {
    if (sign == '+') {
        msg = msg + num;
        if (msg > 'Z') {
            msg = 'A' + (msg - 'Z' - 1);
        }
    }
    else {
        msg = msg - num;
        if (msg < 'A') {
            msg = 'Z' - ('A' - msg - 1);
        }
    }
    return msg;
}
