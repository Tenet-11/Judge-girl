#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "swap.h"
void swap(int* x, int* y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}
