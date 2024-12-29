#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int a, b, c, d;
	scanf("%d %d %d %d", &a, &b, &c, &d);
	int day = 0;
	
	int temp = a - b;
	while (a - b > 0)
	{
		temp = temp - c;
		day++;
		if (temp <= 0) {
			break;
		}
		temp = temp + d;
	}
	printf("%d\n", day);

}
