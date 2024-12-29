#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int profit;
	double money;

	scanf("%d", &profit);
	if (profit <= 100000) {
		money = profit * 0.1;
		printf("%.2f", money);
	}
	else if (profit > 100000 && profit <= 200000) {
		profit -= 100000;
		money = 10000 + profit * 0.075;
		printf("%.2f", money);
	}
	else if (profit > 200000 && profit <= 400000) {
		profit -= 200000;
		money = 10000 + 7500 + profit * 0.05;
		printf("%.2f", money);
	}
	else if (profit > 400000 && profit <= 600000) {
		profit -= 400000;
		money = 10000 + 7500 + 10000 + profit * 0.03;
		printf("%.2f", money);
	}
	else if (profit > 600000 && profit <= 1000000) {
		profit -= 600000;
		money = 10000 + 7500 + 10000 + 6000 + profit * 0.015;
		printf("%.2f", money);
	}
	else if (profit > 1000000) {
		profit -= 1000000;
		money = 10000 + 7500 + 10000 + 6000 + 6000 + profit * 0.01;
		printf("%.2f", money);
	}
}
