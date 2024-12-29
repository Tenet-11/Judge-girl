#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int m;
	scanf("%d", &m);
	for (int i = 0; i < m; i++)
	{
		int a, b;
		scanf("%d %d", &a, &b);
		int max = 0;
		for (int j = a; j <= b; j++)
		{
			int cycle_length = 1; //至少會印出自己
			int value = j;
			while (1) {
				if (value == 1) {
					break;
				}
				if (value % 2 == 1) {
					value = 3 * value + 1;
				}
				else value = value / 2;
				cycle_length++;
			}
			if (cycle_length > max) {
				max = cycle_length;
			}
		}
		printf("%d\n", max);
	}
}
