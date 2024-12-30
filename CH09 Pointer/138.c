#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "max.h"

int max(int* iptr, int n) {
    iptr--; //主程式main到最後一個數前有再加1，所以要扣掉
    int max = 0;
    for (int i = 0; i < n; i++)
    {
        if (*iptr > max) {
            max = *iptr;
        }
        iptr--;
    }
    return max;
}
//被主程式的邏輯搞混了，最後的iptr的記憶體位址是最大的，所以要往前扣
