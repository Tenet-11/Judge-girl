#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int N;
	scanf("%d", &N);
	for (int i = 1; i <= N; i++) //印幾行
	{
		for (int j = 1; j <= i; j++) { //印的每行有幾個0跟1
			if ((i + j) % 2 == 1) {
				printf("0");
			}
			else printf("1");
		}
		printf("\n");
	}
}
