#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include"mid.h"

void mid(int a[5], int n) {
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5 - 1 - i; j++) {
            if (a[j] > a[j + 1]) {
                int temp = a[j + 1];
                a[j + 1] = a[j];
                a[j] = temp;
            }
        }
    }
    printf("Median = %d", a[2]);
}
