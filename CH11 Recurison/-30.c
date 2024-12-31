#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int arr[100][100];
int path_number(int current_r, int current_c, int r, int c)
{
	if (current_r == r && current_c == c) {
		return 1;
	}
	if (current_r<r || current_c>c) {
		return 0;
	}
	if (arr[current_r][current_c] == 0) {
		return 0;
	}
	return path_number(current_r - 1, current_c, r, c) + path_number(current_r, current_c + 1, r, c);
}

int main()
{
	int r, c;
	scanf("%d %d", &r, &c);
	for (int i = 1; i <= r; i++) {
		for (int j = 1; j <= c; j++) {
			scanf("%d", &arr[i][j]);
		}
	}
	int result = path_number(r, 1, 1, c);
	printf("%d", result);
}
