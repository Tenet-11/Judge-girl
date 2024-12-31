#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int row, col;
int Lakes[400][400] = { 0 };
int dx[4] = { -1, 0, 0, 1 };
int dy[4] = { 0, 1, -1, 0 };

int dfs(int x, int y) {
    if (x < 0 || x >= row || y < 0 || y >= col || Lakes[x][y] != 1) {
        return 0;
    }
    Lakes[x][y] = -1; // 標記為訪問過的
    int size = 1;
    for (int k = 0; k < 4; k++) {
        size += dfs(x + dx[k], y + dy[k]); 
    }
    return size;
}

int compare(const void* a, const void* b) {
    return (*(int*)b - *(int*)a); //把void*轉成int*再取值，不能只寫int喔
    // 由大到小排序
}

int main() {
    scanf("%d %d", &row, &col);
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            scanf("%d", &Lakes[i][j]);
        }
    }

    int result[160000] = { 0 }; 
    int count = 0;

    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            if (Lakes[i][j] == 1) {
                result[count++] = dfs(i, j); // 計算湖泊大小並存入結果
            }
        }
    }

    // 使用快速排序
    qsort(result, count, sizeof(int), compare);

    // 輸出排序後的湖泊大小
    for (int i = 0; i < count; i++) {
        printf("%d\n", result[i]);
    }

    return 0;
}
