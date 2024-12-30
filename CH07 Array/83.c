#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int cases;
	int result[100] = { 0 };
	int month[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
	scanf("%d", &cases);

	for (int i = 0; i < cases; i++)
	{
		int M, day;
		scanf("%d%d", &M, &day);

		int month_day = 0;
		for (int j = 0; j < M - 1; j++) //計算輸入月分共會有幾天
		{
			month_day += month[j];
		}
		int total_day = month_day + day;
		result[i] = total_day;
	}

	for (int i = 0; i < cases; i++)
	{
		if (result[i] % 7 == 0)
		{
			printf("Friday\n");
		}
		if (result[i] % 7 == 1)
		{
			printf("Saturday\n");
		}
		if (result[i] % 7 == 2)
		{
			printf("Sunday\n");
		}
		if (result[i] % 7 == 3)
		{
			printf("Monday\n");
		}
		if (result[i] % 7 == 4)
		{
			printf("Tuesday\n");
		}
		if (result[i] % 7 == 5)
		{
			printf("Wednesday\n");
		}
		if (result[i] % 7 == 6)
		{
			printf("Thursday\n");
		}
	}
}
