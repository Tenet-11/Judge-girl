#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int path_number(int current_r, int current_c, int r, int c) {
	if (current_r == r && current_c == c) {
		return 1;
	}
	if (current_r < r || current_c > c) { 
		return 0;
	}
	return path_number(current_r - 1, current_c, r, c) + path_number(current_r, current_c + 1, r, c);
}

int main()
{
	int r, c;
	scanf("%d %d", &r, &c);
	int result = path_number(r, 1, 1, c); //因為是左下到右上(這是關鍵)
	printf("%d", result);
}
