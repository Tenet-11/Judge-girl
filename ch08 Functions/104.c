#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "bubble_sort.h"

void bubble_sort(int data[]) {
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 4 - i; j++) //這裡記得是4-i，不然會造成陣列越界
        {
            if (data[j] > data[j + 1]) {
                int temp = data[j];
                data[j] = data[j + 1];
                data[j + 1] = temp;
            }
        }
    }

    for (int i = 0; i < 5; i++)
    {
        if (i == 4) {
            printf("%d", data[i]);
        }
        else printf("%d ", data[i]);
    }
}
