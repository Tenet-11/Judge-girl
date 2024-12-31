#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <math.h>
#include "rangePerfectSquare.h"

bool rangePerfectSquare(int left, int right, int target) {
    if (left > right) return false;
    int mid = left + (right - left) / 2;
    //會自動取整

    if (mid == target / mid) return true;
    else if (mid > target / mid) return rangePerfectSquare(left, mid - 1, target);
    else return rangePerfectSquare(mid + 1, right, target);
}
