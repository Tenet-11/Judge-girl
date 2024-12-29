#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>
int main()
{
	int minguoyear, year;
	scanf("%d", &minguoyear); 
	year = minguoyear + 1911;

	bool leapyear = (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0));

	printf("%d\n", leapyear); 
}
//我忘記閏年是要看西元年份了
