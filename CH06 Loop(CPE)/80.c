#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main()
{
	int S;
	double arr[1000] = { 0 };
	scanf("%d", &S);
	for (int i = 0; i < S; i++)
	{
		int N, j;
		double p = 0;
		scanf("%d %lf %d", &N, &p, &j);
		double q = 1 - p;
		double probability = 0;

		probability = pow(q, j - 1.0) * p / (1.0 - pow(q, N));
		arr[i] = probability;
	}

	for (int i = 0; i < S; i++)
	{
		printf("%.4lf\n", arr[i]);
	}
}
// 開float會WA，double才夠大
