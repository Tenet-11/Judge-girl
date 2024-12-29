#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main()
{
	while (1)
	{
		int a, b;
		scanf("%d %d", &a, &b);
		if (a == 0 && b == 0)
		{
			return 0;
		}
		int temp_test = 0;
		int test_arr[100] = { 0 };
		for (int i = a; i <= b; i++)
		{
			
			int test = i;
			int j = 0;
			while (test != 0)
			{
				test_arr[j] = test % 10;
				test /= 10;
				j++;
			}
			
			int test_cal = 0;
			for (int k = 0; k < j; k++)
			{
				test_cal += pow(test_arr[k], 3);
			}

			if (test_cal == i)
			{
				printf("有\n");
				temp_test = 1;
				break;
			}
		}
		if (temp_test == 0)
		{
			printf("無\n");
		}
		
	}
}
