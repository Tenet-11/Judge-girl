#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>
int main()
{
	int a, b, c;
	scanf("%d%d%d", &a, &b, &c);
	if (c == a + b) 
	{
		printf("true");
	}
	else
		printf("false");
}
// 等號一個是賦值，兩個是相等
