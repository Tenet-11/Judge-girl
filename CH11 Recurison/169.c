#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "fibr.h"

int fibr(int n) {
	if (n == 1) return 1;
	else if (n == 2) return 2;
	else return fibr(n - 1) + fibr(n - 2);
}
