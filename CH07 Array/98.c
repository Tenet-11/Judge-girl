#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int n;
	int arr[100];
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}

	int count = 0;
	for (int i = 0; i < n; i++) {
		if (arr[i] == 0) {
			count++;
		}
	}

	int non_zero_arr[100] = { 0 };
	int j = 0;
	for (int i = 0; i < n; i++) {
		if (arr[i] != 0) {
			non_zero_arr[j] = arr[i];
			j++;
		}
	}

	for (int i = 0; i < n - count; i++) {
		if (count == 0 && i == n-1) {
			printf("%d", non_zero_arr[i]);
		}
		else printf("%d ", non_zero_arr[i]);
	}
	for (int i = 0; i < count; i++) {
		if (i == count - 1) {
			printf("0");
		}
		else printf("0 ");
	}
}
