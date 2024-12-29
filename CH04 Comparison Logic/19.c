#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>

int main()
{
	int a;
	scanf("%d", &a);
	if (a > 10000)
	{
		printf("%d是正數\n", a);
		printf("B");
	}
	else if (a <= 10000 && a > 0)
	{
		printf("%d是正數\n", a);
		printf("A");
	}
	else if (a <= -10000)
	{
		printf("%d是負數\n", a);
		printf("C");
	}
	else if (a > -10000 && a < 0)
	{
		printf("%d是負數\n", a);
		printf("D");
	}
	else
		printf("0不是正數也不是負數");
}
