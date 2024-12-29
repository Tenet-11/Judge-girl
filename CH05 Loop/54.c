#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int emirp(int n)
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



int main()
{
	int m;
	scanf("%d", &m);
	for (int i = 0; i < m; i++)
	{
		int n;
		scanf("%d", &n);
		int test_prime = 0;
		for (int j = 2; j < n; j++) {
			if (n % j == 0) {
				test_prime = 1;
				break;
			}
		}
		int reverse_n = emirp(n);
		int test_emirp_prime = 0;
		for (int j = 2; j < reverse_n; j++) {
			if (reverse_n % j == 0) {
				test_emirp_prime = 1;
				break;
			}
		}
		
		
		if (test_prime == 1) {
			printf("%d is not prime.\n", n);
		}
		else if (test_emirp_prime != 1 && n != reverse_n) {
			printf("%d is emirp.\n", n);
		}
		else {
			printf("%d is prime.\n",n);
		}
	}
}
