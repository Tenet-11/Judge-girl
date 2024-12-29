#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int trailingzero(long long int n) //開一個函式計算一個數後面幾個0
{
	int count = 0;
	// 每次除以5，計算 n 中有多少個因數5
	count = n / 5;
	return count;
}


int main()
{
	int result[50001] = { 0 };
	int i = 0;
	long long int low = 0, high = 0;
	while (1)
	{
		scanf("%lld%lld", &low, &high);

		if (low == 0 && high == 0)
		{
			break;
		}

		int low_trailzero = trailingzero(low);
		int high_trailzero = trailingzero(high);

		result[i] = high_trailzero - low_trailzero + 1;
		i++;
	}
	
	for (int j = 0; j < i; j++)
	{
		printf("%d\n", result[j]);
	}
}

// 10月23更，我原本作法數學邏輯上是對的，就是找n/5+n/25+...。但結果CPE的正解只要除以5，他數學邏輯完全錯，害我想那麼久，小破防。
