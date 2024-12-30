#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include "convert.h" //這邊要寫convert而不是標頭檔conver??

void convert(int a[3][3], int b[3][3]) {
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            b[i][j] = a[j][i];
        }
    }
}
