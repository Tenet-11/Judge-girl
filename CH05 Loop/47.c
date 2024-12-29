#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int N;
	scanf("%d", &N);

	int first_per = 0;
	for (int i = 2; i <= N; i++)
	{
		int test = i;

		int sum_factor = 0;
		for (int j = 1; j < i; j++)
		{
			if (i % j == 0) {
				sum_factor += j;
			}
		}
		if (sum_factor == test) {
			if (first_per == 0) {
				printf("%d", test);
				first_per = 1;
			}
			else printf(" %d", test);
		}
	}
}
