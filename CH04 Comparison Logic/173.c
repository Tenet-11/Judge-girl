#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int income;
	scanf("%d", &income); //switch只能處理具體數字，範圍不好用
	if (income <= 560000)
	{
		int tax = income * 0.05;
		printf("全年應繳稅額為： %d 元", tax);
	}
	else if (income > 560000 && income <= 1260000)
	{
		int tax = income * 0.12 - 39200;
		printf("全年應繳稅額為： %d 元", tax);
	}
	else if (income > 1260000 && income <= 2520000)
	{
		int tax = income * 0.2 - 140000;
		printf("全年應繳稅額為： %d 元", tax);
	}
	else if (income > 2520000 && income <= 4720000)
	{
		int tax = income * 0.3 - 392000;
		printf("全年應繳稅額為： %d 元", tax);
	}
	else if (income > 472000)
	{
		int tax = income * 0.4 - 864000;
		printf("全年應繳稅額為： %d 元", tax);
	}
}
