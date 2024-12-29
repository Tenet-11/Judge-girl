#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	while (1)
	{
		int a, b;
		scanf("%d %d", &a, &b);
		if (a == 0 && b == 0) {
			break;
		}
		int count = 0;
		int c = 0;
		while (a != 0 || b != 0)
		{
			int digit_a = a % 10, digit_b = b % 10;
			a /= 10, b /= 10;

			if (digit_a + digit_b + c >= 10)
			{
				count++;
				c = 1;
			}
			else c = 0;
		}
		if (count == 0) {
			printf("No carry operation.\n");
		}
		else if (count == 1) {
			printf("1 carry operation.\n");
		}
		else printf("%d carry operations.\n", count);
	}
}
