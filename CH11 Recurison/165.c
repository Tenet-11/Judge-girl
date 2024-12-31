#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "fac.h"

int fac(int n) {
    if (n <= 1) 
        return 1;
    return n * fac(n - 1); //這邊就是遞迴的核心概念
}
