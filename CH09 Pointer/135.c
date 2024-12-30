#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "array_mul.h"

void array_mul(int* a, int* b, int size) { 
    for (int i = 0; i < size; i++) {
        *a = *a * *b;
        a++;
        b++;
    }
}
