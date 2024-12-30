#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

void floodFill(int** image, int imageSize, int sr, int sc, int newColor) {
    int original_color = image[sr][sc];
    void fill(int x, int y) { //函式包函式不被允許，但這題簡單
        if (x<0 || x>=imageSize || y<0 || y>=imageSize || image[x][y] != original_color) {
            return;
        }
        image[x][y] = newColor;
        fill(x - 1,y);
        fill(x + 1, y);
        fill(x, y + 1);
        fill(x, y - 1);
    }
    fill(sr, sc);
    return;
}

// 在Vsc上函式不能式包函式
