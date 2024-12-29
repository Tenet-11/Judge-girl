#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int test;
	int result[10000] = { 0 };
	scanf("%d", &test);
	for (int i = 0; i < test; i++)
	{
		int depth, L;
		scanf("%d%d", &depth, &L);
		int pos = 1;//當前的節點位置
		for (int j = 0; j < depth; j++) {  // 遍歷樹的深度
			if (L % 2 == 0) {  // L為偶數時，向右走
				L /= 2;
				pos = (pos * 2) + 1;
			}
			else {  // L為奇數時，向左走
				L = (L / 2) + 1;
				pos *= 2;
			}
		}
		printf("%d\n", pos / 2);  // pos/2
	}
}

// 這題記得複習，L的概念還是模糊
