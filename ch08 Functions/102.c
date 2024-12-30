#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "isPalindrome.h"

void isPalindrome(int x) {
	int number = x;
	if (number < 0 ) {
		printf("false");
		return; //這裡的return只是讓函式結束，上面的print一樣會在主程式印出來
	}

	int reverse_number = 0;
	
	while (x != 0) //迴文的計算一個迴圈就夠了
	{
		int a = x % 10;
		reverse_number = reverse_number * 10 + a;
		x /= 10;
	}

	if (number == reverse_number)
	{
		printf("true\n");
	}
	else printf("false\n");
}
