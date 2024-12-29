#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main()
{
	int n;
	double number;
	scanf("%d %lf", &n, &number);
	double result = pow(number, 1.0 / n);
	printf("%.0lf", result);
} 
// 用到指數，對數，開根號什麼的記得開 math.h 
