#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include "power.h"
void power(double* x, double* y, double* res) {
    *res = pow(*x, *y);
}
