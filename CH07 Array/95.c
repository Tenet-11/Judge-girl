#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
// 我覺得是簡單題，期中考有出，但我一個大佬朋友寫不出來
int main()
{
	int Ci[100] = { 0 };
	int has_used_Ci[100] = { 0 };
	int N, K;
	scanf("%d %d", &N, &K);
	for (int i = 0; i < N; i++) {
		scanf("%d", &Ci[i]);
	}
	
	int result = 0;
	for (int i = 0; i < N; i++) {
		int count = 1;
		for (int j = i + 1; j < N; j++) {
			if (Ci[i] == Ci[j] && has_used_Ci[j]!=1) {
				count++;
				has_used_Ci[j] = 1;
			}
		}
		result += count / K;
	}
	printf("%d", result);
}
