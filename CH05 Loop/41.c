#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int a, b;
	scanf("%d%d", &a, &b);
	int test = 0;
	for (int i = 2; i < b; i++)
	{
		if (a % i == 0 && b % i == 0)
		{
			test = 1;
			break;
		}
	}
	if (test == 1) {
		printf("兩數不互質");
	}
	else printf("兩數互質");
}
