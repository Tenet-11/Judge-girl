#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int row, column;
	while (scanf("%d %d", &row, &column) != EOF)
	{
		if (row == 0 || column == 0)
		{
			return 0;
		}
		int knight_count, more, less;
		if (row >= column)
		{
			more = row, less = column;
		}
		else {
			more = column, less = row;
		}

		if (less == 1) {
			knight_count = more;
			printf("%d knights may be placed on a %d row %d column board.\n", knight_count, row, column);
			continue;
		}
		if (less == 2)
		{
			int a = more / 4;
			knight_count = a * 4;
			if (more % 4 >= 2) {
				knight_count += 4;
			}
			else if (more % 4 == 1) {
				knight_count += 2;
			}
			printf("%d knights may be placed on a %d row %d column board.\n", knight_count, row, column);
			continue;
		}

		//接下來處理less大於2的狀況
		knight_count = (more * less + 1) / 2;
		printf("%d knights may be placed on a %d row %d column board.\n", knight_count, row, column);
	}
}

// 把圖畫出來比較好想。尤其是如果3乘3以上的話，畫圖才可以推理得到那個公式
// 推理真難
