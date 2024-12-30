#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int T;
	int result[100] = { 0 };
	scanf("%d", &T);
	for (int i = 0; i < T; i++)
	{
		int number;
		scanf("%d", &number);
		int smallest_generator = 0;

		for (int j = 0; j < number; j++)
		{
			int N = j;
			int sum = j;

			while (N != 0) //提出每個位數
			{
				sum += N % 10;
				N /= 10;
			}

			if (sum == number)
			{
				smallest_generator = j;
				break;
			}
		}
		result[i] = smallest_generator;		
	}

	for (int i = 0; i < T; i++)
	{
		printf("%d\n", result[i]);
	}
}
