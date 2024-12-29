#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	while (1)
	{
		int K;
		scanf("%d", &K);
		
		if (K == 0)
		{
			return 0;
		}
		
		int N, M;
		scanf("%d%d", &N, &M); //參考點

		for (int i = 0; i < K; i++)
		{
			int X, Y;
			scanf("%d%d", &X, &Y);

			if (N == X || M == Y)
			{
				printf("divisa\n");
				continue;
			}

			if (N < X && M < Y)
			{
				printf("NE\n");
				continue;
			}

			if (N > X && M < Y)
			{
				printf("NO\n");
				continue;
			}

			if (N < X && M >Y)
			{
				printf("SE\n");
				continue;
			}

			if (N > X && M > Y)
			{
				printf("SO\n");
			}
		}
	}
}
// 我還以為要一次把答案全都印出...
// 根本不用開到字元陣列，一行一行印也會給對
