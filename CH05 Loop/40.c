#include <stdio.h>
int main()
{
	int a, b;
	scanf("%d%d", &a, &b);
	for (int i = 1; i <= (a <= b ? a : b); i++)
	{
		int first = 1;
		if (a % i == 0 && b % i == 0)
		{
			if (i != first)
			{
				printf(" ");
			}
			printf("%d", i);
		}
	}
	printf("\n");
	for (int j = (a <= b ? a : b); j >= 1; j--)
	{
		if (a % j == 0 && b % j == 0)
		{
			printf("%d", j);
			break;
		}
	}
}
