#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int sum = 0;
	while (1) {
		int N;
		scanf("%d", &N);
		if (N % 2 == 1) {
			sum++;
		}
		if (N == 0) {
			break;
		}
	}
	printf("%d", sum);
}
