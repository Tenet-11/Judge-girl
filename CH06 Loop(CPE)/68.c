#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int T;
	long int result[100000] = { 0 };
	scanf("%d", &T);

	for (int i = 0; i < T; i++)
	{
		int key, door;
		scanf("%d %d", &key, &door);
		result[i] = ((door - 1) + (door - key)) * key * 0.5;
	}

	for (int i = 0; i < T; i++)
	{
		printf("%ld\n", result[i]);
	}
	return 0;
}

// 可能是因為數字太大，把全部的可能性討論完要開到long long int才夠
// 看到陣列元素太多，main有綠色底線(警告)的話沒關係
