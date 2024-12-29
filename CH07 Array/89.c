#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int matrix1[5][5];
	int a1, b1;
	scanf("%d %d", &a1, &b1);
	for (int i = 0; i < a1; i++)
	{
		for (int j = 0; j < b1; j++)
		{
			scanf("%d", &matrix1[i][j]);
		}
	}

	int matrix2[5][5];
	int a2, b2;
	scanf("%d %d", &a2, &b2);
	for (int i = 0; i < a2; i++)
	{
		for (int j = 0; j < b2; j++)
		{
			scanf("%d", &matrix2[i][j]);
		}
	}

	int matrix[5][5] = { 0 };
	for (int i = 0; i < a1; i++)
	{
		for (int j = 0; j < b2; j++)
		{
			for (int k = 0; k < a2; k++) {
				matrix[i][j] += matrix1[i][k] * matrix2[k][j];
			}
		}
	}

	for (int i = 0; i < a1; i++)
	{
		for (int j = 0; j < b2; j++)
		{
			printf("%d ", matrix[i][j]);
		}
		printf("\n");
	}
}
