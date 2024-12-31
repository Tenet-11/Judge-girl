#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int n, m;
int compare(const void* a,const void* b) {
	int x = *(int*)a;
	int y = *(int*)b;
	if (x % m != y % m) {
		return x % m - y % m;
	}
	//兩餘數相等
	/*奇排偶前面、
	奇數同，由大到小排、
	偶數同，由小到大排*/
	else {
		if (x % 2 != 0 && y % 2 != 0) {
			return y - x;
		}
		else if (x % 2 == 0 && y % 2 == 0) {
			return x - y;
		}
		else {
			int oddx = abs(x) % 2;
			int oddy = abs(y) % 2;
			return oddy - oddx;
		}
	}
}

int main()
{
	while (scanf("%d %d", &n, &m) == 2) {
		if (n == 0 && m == 0) {
			printf("0 0\n");
			break;
		}
		
		int num[9999];
		for (int i = 0; i < n; i++) {
			scanf("%d", &num[i]);
		}

		qsort(num, n, sizeof(int), compare);

		printf("%d %d\n", n, m);
		for (int i = 0; i < n; i++) {
			printf("%d\n", num[i]);
		}
	}
}
