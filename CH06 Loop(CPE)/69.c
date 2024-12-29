# define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int result[100] = { 0 };
	int count = 0;
	while (1)
	{
		int H1, M1, H2, M2;
		scanf("%d%d%d%d", &H1, &M1, &H2, &M2);

		if (H1 == 0 && M1 == 0 && H2 == 0 && M2 == 0)
		{
			break;
		}

		int differ_time = (H2 * 60 + M2) - (H1 * 60 + M1);
		if (differ_time < 0)
		{
			differ_time += 1440;
		}
		result[count] = differ_time; 
		count++;
	}
	
	for (int i = 0; i < count; i++)
	{
		printf("%d\n", result[i]);
	}
}

// 這題要注意的是同時輸入跟輸出，因為C不像C++一樣有vector，所以必須自定義一個陣列，大小隨便設(?。把每個值同時輸入再同時輸出
