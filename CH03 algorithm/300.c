#define _GNU_SOURCE
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
int main()
{
	int radius;
	scanf("%d", &radius);

	if (radius <= 0)
	{
		return 0;
	}

	printf("pi=%.5f\n", M_PI);
	printf("radius=%d\n", radius);
	printf("circumference=%.5f\n", radius*M_PI*2);
	printf("area=%.5f\n", radius * radius * M_PI);
}
// 先乘半徑才能乘圓周率，不然會導致精度不符合題目要求
// 有點玄
