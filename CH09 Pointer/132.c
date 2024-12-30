#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "bubble.h"

void bubble(int* arr)
{
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5 - 1 - i; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j + 1];
                arr[j + 1] = arr[j];
                arr[j] = temp;
            }
        }
    }

    for (int i = 0; i < 5; i++) {
        if (i == 0) printf("%d", arr[i]);
        else printf(" %d", arr[i]);
    }
}
