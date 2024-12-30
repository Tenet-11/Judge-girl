#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "getFib.h"

void getFib(int N)
{
	int array[10000];
	array[1] = 0; //先不管陣列[0]
	array[2] = 1;
	if (N == 1)  printf("0");
	else if (N == 2)  printf("0 1");
	else
	{
		printf("0 1 ");
		for (int i = 3; i <= N; i++)
		{
			array[i] = array[i - 1] + array[i - 2];
			if (i == N ) printf("%d", array[i]);
			else        printf("%d ", array[i]);
		}
	}
		
}
