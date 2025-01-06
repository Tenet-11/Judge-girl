#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

void swap(int* x, int* y) {
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

// 排列全部組合看時間
void time_computation(int* ans, int* arr, int buff, int l,int r) {
    
    // 計算擊殺寶箱怪時間
    if (l == r) {
        int power = 1;
        int time = 0;
        for (int i = 0; i <= r; i++) {
            // int 非整數會向下取整，但現在要向上取整
            time += (arr[i] + power - 1) / power;
            power += buff;
        }
        if (time < *ans) {
            *ans = time;
        }
        return;
    }

    // 全排列的生成
    for (int i = l; i <= r; i++) {
        swap(&arr[l], &arr[i]);
        time_computation(ans, arr, buff, l + 1, r);
        swap(&arr[l], &arr[i]);
    }
}

int main() {
    int N = 0, buff = 0;
    scanf("%d %d", &N, &buff);
    int* arr = (int*)malloc(N * sizeof(int));
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    int ans = INT_MAX;
    // Bubble sort (把最大的移到右邊)
    // 沒用的話會TLE 85
    for (int i = 1; i < N; i++) {
        for (int j = 0; j < N - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(&arr[j], &arr[j + 1]);
            }
        }
    }
    time_computation(&ans, arr, buff, 1, N - 1);

    printf("%d\n", ans);
    free(arr);
}
