#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int cola(int n)
{
	int every_time_cola = 0;
	int vacant_cola = 0;
	int sum_cola = n;
	while (n / 3 != 0)
	{
		every_time_cola = n / 3;
		sum_cola += every_time_cola;
		vacant_cola = n % 3;
		n = every_time_cola + vacant_cola;
		if (n == 2) {
			sum_cola++;
		}
	}
	return sum_cola;
}

int main()
{
	int M;
	scanf("%d", &M);
	for (int i = 0; i < M; i++)
	{
		int N;
		scanf("%d", &N);
		int result = cola(N);
		printf("%d\n", result);
	}
}
