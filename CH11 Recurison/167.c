#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "f.h"

int f(int n) {
    if (n < 10) {
        return n;
    }
    else
    {
        int sum = 0;
        while (n != 0) {
            sum += n % 10;
            n /= 10;
        }
        return f(sum);
    }
}
