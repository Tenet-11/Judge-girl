#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int time, velocity;
	while (scanf("%d%d", &velocity, &time) != EOF)
	{
		int displacement = 2 * velocity * time;
		printf("%d\n", displacement);
	}
}

// 好酷喔，為甚麼不用考慮絕對值，而且我記得我昨天就這樣寫他還是給我錯
