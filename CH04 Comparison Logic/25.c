#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int month, electricity;
	scanf("%d%d", &month, &electricity);

	if (month >= 6 && month <= 9)
	{
		if (electricity > 120)
		{
			int money = electricity * 7;
			printf("%d", money);
		}
		else if (electricity <= 120)
		{
			int money = electricity * 5;
			printf("%d", money);
		}
	}
	else if (month < 6 || month > 9)
	{
		if (electricity > 120)
		{
			int money = electricity * 5;
			printf("%d", money);
		}
		else if (electricity <= 120)
		{
			int money = electricity * 3;
			printf("%d", money);
		}
	}
}

//在scanf不能有換行符號(\n)
//C 語言中，if 條件語句不支持像 9 >= month >= 6 這樣的連續比較
