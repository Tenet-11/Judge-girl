#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int weight[20], value[20];
int n, limit_w;
int max_value = 0;

void knapsack_dfs(int index, int current_w, int current_v)  
//重點是index:表示遞迴中目前處理到的物品索引
{
	if (current_w > limit_w) return;

	if (current_v > max_value) //要放在index判斷前面，不然到最後一個索引會沒有更新就結束
		max_value = current_v;

	if (index == n) return;

	knapsack_dfs(index + 1, current_w + weight[index], current_v + value[index]);//選擇當前物品

	knapsack_dfs(index + 1, current_w, current_v);//不選擇
}

int main()
{
	scanf("%d %d", &n, &limit_w);

	for (int i = 0; i < n; i++)
	{
		scanf("%d %d", &weight[i], &value[i]);
	}
	
	knapsack_dfs(0, 0, 0);

	printf("%d", max_value);
}
