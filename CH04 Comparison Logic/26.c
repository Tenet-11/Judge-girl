#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int distance;
	scanf("%d", &distance);
	if (distance > 20)
	{
		if (distance > 100)
		{
			distance = distance-20;
			int money = (100 + distance * 8) * 0.9;
			printf("%d", money);
		}
		else if (distance > 20 && distance <= 100)
		{
			distance = distance - 20;
			int money = 100 + distance * 8;
			printf("%d", money);
		}
	}
	else if(distance <= 20)
	{
		int money = distance * 5;
		printf("%d", money);
	}
		
}
