#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "lcs.h"

int max(int a, int b) {
    if (a > b) return a;
    else return b;
}

// 最長子序列
int lcs(int* text1, int* text2, int m, int n) {
    // 代表某個陣列已經沒有數可以比了
    if (m == 0 || n == 0) return 0;

    //當前比較位數相等
    if (text1[m] == text2[n]) {
        return 1 + lcs(text1, text2, m - 1, n - 1);
    }

    //當前比較位數不相等
    return max(lcs(text1, text2, m - 1, n), lcs(text1, text2, m, n - 1));
}

//把一個數的每位數放入陣列
void int_to_array(int* array1, int value, int index) { 
    for (int i = 1; i <= index; i++) {
        array1[i] = value % 10;
        value /= 10;
    }
}
