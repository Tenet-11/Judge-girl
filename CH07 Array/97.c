#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int n;
	int arr[100] = { 0 };
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}

	int max_sum = arr[0];
	int current_sum = arr[0];
	for (int i = 1; i < n; i++) {
		if (current_sum + arr[i] > arr[i]) {
			current_sum = current_sum + arr[i];
		}
		else current_sum = arr[i];
		if (max_sum < current_sum) {
			max_sum = current_sum;
		}
	}
	printf("%d", max_sum);
}
// 貪婪演算法
