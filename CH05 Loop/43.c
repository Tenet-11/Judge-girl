#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int N;
	scanf("%d", &N);
	double result = 0;
	for (int i = 1; i <= N; i++)
	{
		result += 1.0 / i;
	}
	printf("%.2lf", result);
}
