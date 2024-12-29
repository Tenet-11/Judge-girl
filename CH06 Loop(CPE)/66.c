#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int totalcola(int empty_bottle, int needing_bottle)
{
	int Totalcola = 0;
	while (empty_bottle / needing_bottle >= 1)
	{
		int once_cola = empty_bottle / needing_bottle;
		Totalcola = Totalcola + once_cola;
		empty_bottle = empty_bottle % needing_bottle + once_cola;
	}
	return Totalcola;
}

int main()
{
	int N;
	int result[15];
	scanf("%d", &N);
	for (int i = 0; i < N; i++)
	{
		int e, f, c;
		scanf("%d%d%d", &e, &f, &c);
		int empty_bottle = e + f;

		result[i] = totalcola(empty_bottle, c);
	}

	for (int i = 0; i < N; i++)
	{
		printf("%d\n", result[i]);
	}
}

// 跟可樂喝到飽其實滿像的，但比較簡單
