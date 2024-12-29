#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	long long int n_diff_m;
	while (scanf("%lld", &n_diff_m) != EOF)
	{
		if (n_diff_m == 0) {
			return 0;
		}

		int vacant = 0; //調整題目要的格式，每格空最後不空
		for (int b = 9; b >= 0; b--)
		{
			if ((n_diff_m - b) % 9 == 0)
			{
				long long int M = (n_diff_m - b) / 9;
				long long int N = 10 * M + b;
				if (vacant == 0) {
					printf("%lld",N);
					vacant = 1;
				}
				else printf(" %lld", N);
			}
		}
		printf("\n");
	}
}
//由小到大排列，所以b要從9討論到0
//越來越像解數學題了
