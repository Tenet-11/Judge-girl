#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int n;
	scanf("%d", &n);
	int arr[100];
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}

	int sum = 0, max_len = 0;
	for (int i = 0; i < n; i++)
	{
		sum = 0;
		for (int j = i; j < n; j++) {
			if (arr[j] == 1) {
				sum++;
			}
			else sum--;
			if (sum == 0) {
				int current_len = j - i + 1;
				if (current_len > max_len) {
					max_len = current_len;
				}
			}
		}
	}
	printf("%d", max_len);
}
