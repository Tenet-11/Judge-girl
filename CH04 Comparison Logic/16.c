#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>

int main()
{
	int a, b;
	scanf("%d%d", &a, &b);
	if (a > b)
	{
		printf("%d", a);
	}
	else if (a < b)
	{
		printf("%d", b);
	}
	else
	{
		printf("equal");
	}
}
