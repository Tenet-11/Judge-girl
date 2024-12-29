#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		int a, b;
		scanf("%d %d", &a, &b);

		int odd_sum = 0;
		for (int j = a; j <= b; j++)
		{
			if (j % 2 == 1) {
				odd_sum += j;
			}
		}
		printf("%d\n", odd_sum);
	}
}
