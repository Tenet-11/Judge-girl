#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int a, b, c, d;
	while (scanf("%d %d %d %d", &a, &b, &c, &d) != EOF)
	{
		if (a == 0 && b == 0 && c == 0 && d == 0) {
			return 0;
		}
		int degree = 1080;

		degree += ((a - b + 40) % 40 * 9);
		degree += ((c - b + 40) % 40 * 9);
		degree += ((c - d + 40) % 40 * 9);
		printf("%d\n", degree);
	}
}
