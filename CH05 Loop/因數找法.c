#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//輸入一個數找它的因數
int main()
{
	int number;
	scanf("%d", &number);
	for (int i = 1; i <= number; i++) //列出可能的候選者
	{
		if (i % number == 0) //檢查合格條件
		{
			printf("%d", number);
		}
	}
}
