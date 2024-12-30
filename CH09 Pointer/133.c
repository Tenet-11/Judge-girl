#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "mymul.h"

int mymul(int* a, int size) {
    int sum = 1;
    for (int i = 0; i < size; i++) {
        sum *= *a;
        a++;
    }
    return sum;
}
