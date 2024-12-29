#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>

int main()
{
	int weight, distance;
	scanf("%d%d", &weight, &distance);
	if (weight < 5)
	{
		if (distance < 10)
		{
			printf("100");
		}
		else if (distance >= 10)
		{
			int money = 100 + distance * 10;
			printf("%d", money);
		}
	}
	else if (weight >= 5 && weight <= 10)
	{
		int money = 100 + distance * 20;
		printf("%d", money);
	}
	else if (weight > 10 && weight <= 20)
	{
		int money = 100 + distance * 40;
		printf("%d", money);
	}
	else
		printf("不收件");
}


//if 裡面宣告的變數在else if 上可以重複使用因為是不同的作用域
