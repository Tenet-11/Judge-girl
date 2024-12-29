#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int N;
	scanf("%d", &N);
	for (int i = 0; i < N; i++)
	{
		int number;
		scanf("%d", &number);

		int value[50] = { 0 };
		for (int j = 0; j < number; j++)
		{
			scanf("%d", &value[j]);
		}

		int count = 0;
		for (int j = 0; j < number; j++)
		{
			for (int k = 0; k < number-1-j; k++) {
				if (value[k] > value[k+1]) {
					count++;
					int temp = value[k + 1];
					value[k + 1] = value[k];
					value[k] = temp;
				}
			}
		}
		printf("Optimal train swapping takes %d swaps.\n", count);
	}
}
