#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "hnr.h"

void hnr(int n, char A, char B, char C) {
    if (n == 1) {
        printf("盤子從%c移到%c\n", A, C);
        return;
    }
    else {
        hnr(n - 1, A, C, B);
        printf("盤子從%c移到%c\n", A, C);
        hnr(n - 1, B, A, C);
    }
}
