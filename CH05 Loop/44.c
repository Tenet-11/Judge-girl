#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int N;
	scanf("%d", &N);
	int sum = 0;
	for (int i = 1; i <= N; i++)
	{
		for (int j = 1; j <= i; j++) {
			sum += j;
		}
	}
	printf("%d", sum);
}
