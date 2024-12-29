#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int time;
	scanf("%d", &time);
	if (time <= 60)
	{
		int money = 100 * time;
		printf("%d", money);
	}
	else if (time > 60 && time <= 75)
	{
		time = time - 60; 
		int money = 6000 + 125 * time;
		printf("%d", money);
	}
	else if (time > 76)
	{
		time = time - 75;
		int money = 6000 + 1875 + 175 * time;
		printf("%d", money);
	}
}

//18行跟24行記得重新定義time
//_CRT_SECURE_NO_WARNINGS 打字時注意一下O跟0
