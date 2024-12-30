#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int cases;
	scanf("%d", &cases);

	int result[100] = { 0 };
	for (int i = 0; i < cases; i++)
	{
		long long int a, b, c, d;
		scanf("%lld%lld%lld%lld", &a, &b, &c, &d);

		if (a == b && b == c && c == d && d == a)
		{
			result[i] = 1;
			continue;
		}

		if (a == c && b == d)
		{
			result[i] = 2;
			continue;
		}

		if ((a + b + c > d) &&
			(a + b + d > c) &&
			(a + c + d > b) &&
			(b + c + d > a))
		{
			result[i] = 3;
			continue;
		}
		else
			result[i] = 4;
	}

	for (int i = 0; i < cases; i++)
	{
		if (result[i] == 1) {
			printf("square\n");
		}
		else if (result[i] == 2) {
			printf("rectangle\n");
		}
		else if (result[i] == 3) {
			printf("quadrangle\n");
		}
		else if (result[i] == 4) {
			printf("banana\n");
		}
	}
}
