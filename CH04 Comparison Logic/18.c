#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>

int main()
{
	int time;
	scanf("%d", &time);

	switch (time)
	{
	case 7:
		printf("該吃早餐囉");
		break;
	case 12:
		printf("該吃午餐囉");
		break;
	case 17:
		printf("該吃晚餐囉");
		break;
	default:
		printf("現在不能吃東西，會胖喔!");
	}
}
