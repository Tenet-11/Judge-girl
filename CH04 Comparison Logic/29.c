#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int n;
	scanf("%d", &n);
	if (n >= 0 && n <= 10)
	{
		int score = n * 6;
		printf("%d", score);
	}
	else if (n >= 11 && n <= 20)
	{
		n = n - 10;
		int score = 60 + n * 2;
		printf("%d", score);
	}
	else if (n >= 21 && n <= 40)
	{
		n = n - 20;
		int score = 60 + 20 + n;
		printf("%d", score);
	}
	else printf("100");
}
