#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main()
{
	int a, b, N;
	scanf("%d%d%d", &a, &b, &N);
	if (a < 1 || b < 1 || a > 2147483647 || b > 2147483647) {
		return 0;
	}
	if (N < 1 || N > 10000) {
		return 0;
	}

	int c = a / b;
	printf("%d.", c);

	a %= b;
	for (int i = 1; i <= N; i++)
	{
		a *= 10;
		printf("%d", a / b);
		a %= b;
	}
}
