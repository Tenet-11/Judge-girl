#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int count = 0;
	while (1)
	{
		int n;
		int arr[1000] = { 0 };
		int move = 0;
		scanf("%d", &n);
		if (n == 0) {
			break;
		}
		for (int i = 0; i < n; i++) {
			scanf("%d", &arr[i]);
		}
		
		int total_height = 0;
		for (int i = 0; i < n; i++) {
			total_height += arr[i];
		}
		int average_height = total_height / n;
		for (int i = 0; i < n; i++)
		{
			if (arr[i] > average_height) {
				move = move + (arr[i] - average_height);
			}
		}
		count++;
		printf("Set #%d\n", count);
		printf("The minimum number of moves is %d.\n", move);
		printf("\n");
	}
}
