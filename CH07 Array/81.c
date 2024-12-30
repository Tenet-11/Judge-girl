#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int cases;
	scanf("%d", &cases);
	int result[1000];

	for (int i = 0; i < cases; i++) //遍歷多少測資
	{
		int n;
		scanf("%d", &n);
		int count = 0;
		int money[1000] = { 0 };
		for (int j = 0; j < n; j++)  //輸入值
		{
			scanf("%d", &money[j]); 
		}
		for (int j = 1; j < n; j++) // 計算題目要求
		{
			for (int k = j - 1; k >= 0; k--)
			{
				if (money[j] >= money[k]) {
					count++;
				}
			}
		}
		result[i] = count;
	}

	for (int i = 0; i < cases; i++)
	{
		printf("%d\n", result[i]);
	}
}
