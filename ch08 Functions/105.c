#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "getMax.h"

void getMax(int data[], int size) {
    
    int max = -2147483648;
    for (int i = 0; i < 5; i++)
    {
        if (data[i] > max) {
            max = data[i];
        }
    }
    printf("%d\n", max); 
}
