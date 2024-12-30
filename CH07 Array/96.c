#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int n;
	int arr[100];
	int used_arr[100] = { 0 };
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++) {
			if (arr[i] == arr[j]) {
				used_arr[i] = 1;
				used_arr[j] = 1;
			}
		}
	}
	for (int i = 0; i < n; i++) {
		if (used_arr[i] != 1) {
			printf("%d", arr[i]);
		}
	}
}
