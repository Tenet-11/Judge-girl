#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int n;
	while (scanf("%d", &n) != EOF)
	{
		int x = (n + 1) / 2;
		long long int total_number = 0;
		long long int i = 1;
		while (x > 0)
		{
			total_number += i;
			i += 2;
			x--;
		}
		long long int value = total_number * 2 - 1;
		long long int result = value + (value - 2) + (value - 4);
		printf("%lld\n", result);
	}
}

// 這題要加EOF不然不給過
// 這題莫名地不難但我卡很久，可能邏輯不太好...

/*在 C 語言中，是可以用 int 型別的變數來計算並賦值給 long long int 型別的變數的。但前提是要確保
int型別變數大小沒有越界*/
