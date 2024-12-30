#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int num = 0;
	int rock[100] = { 0 };
	int rock_value[100] = { 0 };
	while (scanf("%d", &rock[num]) != EOF){
		rock_value[rock[num]]++;
		num++;
	}
	for (int i = 1; i < 100; i++) {
		if (rock_value[i] == 2) {
			printf("%d", i);
		}
	}
}

// 這裡EOF沒有設置停止條件，所以在vsc上會無限執行，如果要檢測有沒有寫錯可以自己設定停止條件看測資
