#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>
#include "Happynumber.h"

// 快慢指針法

int squaresum(int n) {

    int sum = 0;
    while (n != 0) {
        int a = n % 10;
        sum += a * a;
        n /= 10;
    }
    return sum;
}

bool isHappy(int n) {
    //初始化
    int fast = n;
    int slow = n;

    do {
        fast = squaresum(fast);
        slow = squaresum(squaresum(slow));
    } while (fast != slow);

    if (fast == 1) return true;
    else return false;
}

