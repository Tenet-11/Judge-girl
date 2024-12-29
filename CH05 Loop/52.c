#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
	char alphabet[250];
	scanf("%s", alphabet);
	int sum = 0;
	for (int i = 0; i<=250; i++)
	{
		char c = alphabet[i];
		if (c == 'A' || c == 'a' || c == 'E' || c == 'e' || c == 'i' || c == 'I' || c == 'o' || c == 'O' || c == 'u' || c == 'U')
		{
			sum++;
		}
	}
	printf("%d", sum);
}

// 1、第一次使用字元和字串
// 2、如何判斷一個字串是否為...想要的值
// 3、判斷輸入是否為母音*/
