#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int matrix[3][3];
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			scanf("%d", &matrix[i][j]);
		}
	}

	int value1 = matrix[0][0] * matrix[1][1] * matrix[2][2] + matrix[0][1] * matrix[1][2] * matrix[2][0] + matrix[0][2] * matrix[1][0] * matrix[2][1];
	int value2 = matrix[0][2] * matrix[1][1] * matrix[2][0] + matrix[0][0] * matrix[1][2] * matrix[2][1] + matrix[0][1] * matrix[1][0] * matrix[2][2];
	int value_m = value1 - value2;

	double rev_value_m = 1.0 / value_m;

	float matrix1[3][3] = { 0 };
	matrix1[0][0] = (matrix[1][1] * matrix[2][2] - matrix[1][2] * matrix[2][1]) * rev_value_m;
	matrix1[1][0] = -(matrix[1][0] * matrix[2][2] - matrix[1][2] * matrix[2][0]) * rev_value_m;
	matrix1[2][0] = (matrix[1][0] * matrix[2][1] - matrix[1][1] * matrix[2][0]) * rev_value_m;
	matrix1[0][1] = -(matrix[0][1] * matrix[2][2] - matrix[0][2] * matrix[2][1]) * rev_value_m;
	matrix1[1][1] = (matrix[0][0] * matrix[2][2] - matrix[0][2] * matrix[2][0]) * rev_value_m;
	matrix1[2][1] = -(matrix[0][0] * matrix[2][1] - matrix[0][1] * matrix[2][0]) * rev_value_m;
	matrix1[0][2] = (matrix[0][1] * matrix[1][2] - matrix[0][2] * matrix[1][1]) * rev_value_m;
	matrix1[1][2] = -(matrix[0][0] * matrix[1][2] - matrix[0][2] * matrix[1][0]) * rev_value_m;
	matrix1[2][2] = (matrix[1][1] * matrix[0][0] - matrix[0][1] * matrix[1][0]) * rev_value_m;
	
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			if (matrix1[i][j] == 0)
			{
				printf("0 ");
			}
			else printf("%f ", matrix1[i][j]);
		}
		printf("\n");
	}
}

// 沒技巧只能硬炸
