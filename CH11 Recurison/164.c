#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int min(int a, int b) {
    if (a > b) return b;
    else return a;
}

void findMaximalSquare(int** matrix, int rows, int cols, int* maxEdge) {
    //只要知道最大邊長就好
    *maxEdge = 0;

    for (int i = 0; i < rows + 1; i++) {
        for (int j = 0; j < cols + 1; j++) {
            if (i <= 0 || j <= 0 || matrix[i][j] == 0 || matrix[i - 1][j - 1] == 0) {
                continue;
            }

            if (*maxEdge < matrix[i][j]) {
                *maxEdge = matrix[i][j];
            }

            matrix[i][j] = 1 + min(min(matrix[i - 1][j], matrix[i][j - 1]), matrix[i - 1][j - 1]);
            if (*maxEdge < matrix[i][j]) {
                *maxEdge = matrix[i][j];
            }
        }
    }
}

// 這題稍難用普通的遞迴可能做不出來，所以我去學了動態規劃(dp)來解這題
