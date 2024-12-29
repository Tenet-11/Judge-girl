#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int N;
	scanf("%d", &N);
	int sum = 0;
	for (int i = 1; i <= N; i++)
	{
		sum += i;
		if (i % 5 == 0) {
			sum -= i;
			continue;
		}
		if (i % 7 == 0 || i % 10 == 7) {
			sum += i;
		}
	}
	printf("%d", sum);
}
