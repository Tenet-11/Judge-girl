#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int N;
	scanf("%d", &N);
	for (int i = 1; i <= N; i++)
	{
		if (i == 1 || i == N) {
			for (int j = 1; j <= N; j++) {
				printf("*");
			}
			if (i == 1) {
				printf("\n");
			}
			continue;
		}

		printf("*");
		for (int j = 2; j <= N - 1; j++) {
			printf(" ");
		}
		printf("*\n");
	}
}
