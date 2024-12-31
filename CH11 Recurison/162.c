#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include "permute.h"

void swap(int* x, int* y) {
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

void permute(int* a, int left, int right, int n) {
    
    // 當 left == right 時，代表已經完成一組排列，應該印出當前陣列內容
    if (left == right) {
        //把答案印出來
        for (int i = 0; i < n; i++) {
            printf("%d ", a[i]);
        }
        printf("\n");
        return;
    }

    //  從 left 到 right 進行交換，因為我們只對未完成的部分進行處理
    for (int i = left; i <= right; i++) {
        swap(&a[left], &a[i]);
        permute(a, left + 1, right, n);
        swap(&a[left], &a[i]);
    }
}
