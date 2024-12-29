#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		int x, y;
		scanf("%d %d", &x, &y);
		if (x == y) {
			printf("0\n");
			continue;
		}
		if (x + 1 == y) {
			printf("1\n");
			continue;
		}
		if (x + 2 == y) {
			printf("2\n");
			continue;
		}

		int steps = 0;
		int distance = y - x;
		
		int j = 1;
		while (distance > j * 2)
		{
			distance -= j * 2;
			steps += 2;
			j++;
		}
		if (distance > j) {
			steps += 2;
		}
		else steps++;
		printf("%d\n", steps);
		
	}
}
