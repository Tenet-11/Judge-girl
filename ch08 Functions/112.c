#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include "mul.h"

void mul(int a[3][3], int b[3][3], int c[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            c[i][j] = 0; //要初始化，直接計算會越界
            for (int k = 0; k < 3; k++) {
                c[i][j] += a[i][k] * b[k][j]; //有空複習一下i跟j在矩陣位置
            }
        }
    }
}
