#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include "GCD.h"

int GCD(int t, int v) {
    // 基本情況：當 v 為 0 時，返回 t
    if (v == 0) {
        return t;
    }
    // 否則，遞迴計算 gcd(v, t % v)
    return GCD(v, t % v);
}

int main() {
    int a, b;

    scanf("%d", &a);
    scanf("%d", &b);
    int temp;

    if (b > a) {
        temp = a;
        a = b;
        b = temp;
    }
    printf("%d\n", GCD(a, b));
    return 0;
}
