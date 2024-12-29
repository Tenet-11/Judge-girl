#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>

int main() //有空用陣列解法
{
	int n;
	scanf("%d", &n);
	
	int i = n % 10;
	int j = n % 12;
	switch (i)
	{
	case 0: printf("甲"); break;
	case 1: printf("乙"); break;
	case 2: printf("丙"); break;
	case 3: printf("丁"); break;
	case 4: printf("戊"); break;
	case 5: printf("己"); break;
	case 6: printf("庚"); break;
	case 7: printf("辛"); break;
	case 8: printf("壬"); break;
	case 9: printf("癸"); break;
	}

	switch (j)
	{
	case 0: printf("子"); break;
	case 1: printf("丑"); break;
	case 2: printf("寅"); break;
	case 3: printf("卯"); break;
	case 4: printf("辰"); break;
	case 5: printf("巳"); break;
	case 6: printf("午"); break;
	case 7: printf("未"); break;
	case 8: printf("申"); break;
	case 9: printf("酉"); break;
	case 10: printf("戌"); break;
	case 11: printf("亥"); break;
	}	
}

// 規定用switch，有空地可以試試陣列解法
