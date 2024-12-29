#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <limits.h>

int reverse(int n)
{
	int reverse_n = 0;
	while (n != 0)
	{
		reverse_n += n % 10;
		if (n < 10) {
			break;
		}
		reverse_n *= 10;
		n /= 10;
	}
	return reverse_n;
}

int palindrome(int n)//判斷是否回文數
{
	int original_n = n;
	int reverse_n = 0;
	while (n != 0)
	{
		reverse_n += n % 10;
		if (n < 10) {
			break;
		}
		reverse_n *= 10;
		n /= 10;
	}
	if (original_n == reverse_n)
	{
		return 1;
	}
	else return 0;
}


int main()
{
	int m;
	scanf("%d", &m);
	for (int i = 0; i < m; i++)
	{
		int n;
		scanf("%d", &n);

		int result = 0;
		int count = 0;
		int overflow = 0;
		do {
			if (n > INT_MAX - reverse(n)) {
				printf("overflow!\n");
				overflow = 1;
				break;
			}

			result = n + reverse(n);
			count++;
			n = result;
			
		} while (palindrome(result) != 1);

		if (overflow == 1) {
			continue;
		}
		printf("%d %d\n", count, result);
	}
}
