#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int n;
	scanf("%d", &n);
	int arr_n[100] = { 0 };
	
	int i = 0;
	while (n != 0)
	{
		arr_n[i] = n % 10;
		n /= 10;
		i++;
	}
	
	int sum_A = 0;
	for (int j = 0; j < i; j += 2)
	{
		sum_A += arr_n[j];
	}
	int sum_B = 0;
	for (int j = 1; j < i; j += 2)
	{
		sum_B += arr_n[j];
	}
	int result = sum_A - sum_B;
	if (result < 0) {
		result = -result;
	}
	printf("%d", result);
}
