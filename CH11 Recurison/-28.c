#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int square_sum(int n,int sum,int i)
{
	if (i == n)
	{
		sum += i * i;
		return sum;
	}
	else
	{
		sum += i * i;
		i++;
		return square_sum(n, sum, i);
	}
}

int main()
{
	int n;
	int sum = 0, i = 0;
	scanf("%d", &n);
	int result = square_sum(n, sum, i);
	printf("%d", result);
}
