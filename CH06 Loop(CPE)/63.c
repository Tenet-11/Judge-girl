#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int N;
	scanf("%d", &N);
	for (int i = 0; i < N; i++) {
		int num;
		scanf("%d", &num);

		if (num == 0) {
			printf("0\n");
			continue;
		}
		if (num == 1) {
			printf("1\n");
			continue;
		}

		int j = 9;
		int ans[100] = { 0 };
		int index = 0;
		int test = 0;
		while (j >= 1 && num > 1) {
			if (num % j == 0) {
				ans[index] = j;
				num /= j;
				index++;
				continue;
			}
			else {
				j--;
			}

			if (j == 1 && num > 1) {
				test = 1;
				break;
			}
		}
		if (test==1) {
			printf("-1\n");
			continue;
		}

		for (int k = index - 1; k >= 0; k--) {
			if (k == 0) {
				printf("%d\n", ans[k]);
			}
			else printf("%d", ans[k]);
		}
	}
}
// 當N==0時，Q也要是0
