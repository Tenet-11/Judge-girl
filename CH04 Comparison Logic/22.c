#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>

int main()
{
	int distance;
	scanf("%d", &distance);
	if (distance > 1500)
	{
		int meter = distance - 1500;
		if (meter % 500 != 0)
		{
			int money = (meter / 500 + 1) * 5;
			int sum = money + 80;
			printf("%d", sum);
		}
		else if (meter % 500 == 0)
		{
			int money = (meter / 500) * 5;
			int sum = 80 + money;
			printf("%d", sum);
		}
	}
	else printf("80");
}

//if迴圈其實不一定要加else或else if

/*if 區塊：
在if的中括號內宣告的變數money跟sum，這些變數的作用域僅限於 if 的中括號內。
else if跟else同理
*/

//然後題目的範例竟然給錯了好扯
