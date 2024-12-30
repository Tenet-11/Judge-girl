#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "gcd.h"

void gcd(int a, int b)
{   
    int max_gcd = 1;
    for (int i = 1; i <= a && i <= b; i++)//初始條件；迴圈繼續的條件；運算子
    {
        if (b % i == 0 && a % i == 0) {
            max_gcd = i;
        }
    }
    printf("%d與%d的最大公因數為%d", a, b, max_gcd);
    return;
}
