#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


// 需要了解方向陣列的概念
// 難題
int main()
{
	int arr[15][15];
	int a, b;
	scanf("%d %d", &a, &b);
	for (int i = 0; i < a; i++) {
		for (int j = 0; j < b; j++)
		{
			scanf("%d", &arr[i][j]);
		}
	}
	
	int dir[8][2] = { { -1,1 }, { -1,0 },{-1,-1} ,{0,1},{0,-1},{1,1},{1,0},{1,-1} };

	int d_bomb = 0, und_bomb = 0;

	int ni = 0, nj = 0;
	for (int i = 0; i < a; i++) {
		for (int j = 0; j < b; j++) {
			
			if (arr[i][j] == 5) {
				
				for (int d = 0; d < 8; d++) {
					ni = i + dir[d][0];
					nj = j + dir[d][1];
					if (ni >= 0 && nj >= 0 && ni < a && nj < b && arr[ni][nj]==5) {
						arr[i][j] = 2;
						arr[ni][nj] = 2;
					}
				}

			}
			
		}
	}

	for (int i = 0; i < a; i++) {
		for (int j = 0; j < b; j++) {
			if (arr[i][j] == 1) {

				int found = 0;
				for (int d = 0; d < 8; d++) {
					ni = i + dir[d][0];
					nj = j + dir[d][1];
					if (ni >= 0 && nj >= 0 && ni < a && nj < b && arr[ni][nj] == 5) {
						found = 1;
						d_bomb++;
						break;
					}
				}
				if (found != 1) {
					und_bomb++;
				}

			}
		}
	}
	printf("%d %d", d_bomb, und_bomb);
}
