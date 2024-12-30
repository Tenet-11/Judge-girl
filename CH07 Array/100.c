#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// 也要會方向陣列，但難度比92低多了

int main()
{
	int matrix[4][4];
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++) {
			scanf("%d", &matrix[i][j]);
		}
	}

	int dir[8][2] = { {-1,1},{-1,0},{-1,-1},{0,1},{0,-1},{1,1},{1,0},{1,-1} };
	int matrix1[4][4] = { 0 };
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			int count = 0;
			if (matrix[i][j] == 0)
			{
				for (int d = 0; d < 8; d++) {
					int ni = i + dir[d][0];
					int nj = j + dir[d][1];
					if (ni >= 0 && nj >= 0 && ni < 4 && nj < 4 && matrix[ni][nj] == -1) {
						count++;
					}
				}
				matrix1[i][j] = count;
			}
			else matrix1[i][j] = matrix[i][j];
		}
	}

	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			if (j == 3) {
				printf("%d", matrix1[i][j]);
			}
			else printf("%d ", matrix1[i][j]);
		}
		printf("\n");
	}
}
