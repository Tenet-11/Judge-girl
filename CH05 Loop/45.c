#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int n;
	scanf("%d", &n);
	double result = 0;
	for (int i = 1; i <= n; i++)
	{
		int mul = 1;
		for (int j = 1; j <= i; j++)
		{
			mul *= j;
		}
		result += (double) i / mul;
	}
	printf("%.5lf", result);
}
