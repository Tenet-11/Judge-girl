#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int test;
	int answer[100] = { 0 };
	scanf("%d", &test);

	for (int i = 0; i < test; i++) //測資
	{
		int store; //商店數目
		int store_location[20];
		int max_store = 0, min_store = 99;
		scanf("%d", &store);

		for (int j = 0; j < store; j++)
		{
			scanf("%d", &store_location[j]);
		}
		
		for (int j = 0; j < store; j++) //找最遠的商店
		{
			if (store_location[j] > max_store){
				max_store = store_location[j];
			}
		}

		for (int j = 0; j < store; j++)
		{
			if (store_location[j] < min_store) {
				min_store = store_location[j];
			}
		}
		int result = (max_store - min_store) / 2 + min_store;
		answer[i] = ((max_store - result) + (result - min_store)) * 2;
	}

	for (int i = 0; i < test; i++)
	{
		printf("%d\n", answer[i]);
	}
}
