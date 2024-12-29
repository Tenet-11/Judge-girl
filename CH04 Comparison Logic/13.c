#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int n;
	scanf("%d", &n);
	int arr_n[4] = { 0 };
	for (int i = 3; i >= 0; i--) //記得初始條件設i=3，結束條件i>=0
	{
		arr_n[i] = n % 10;
		n /= 10;
	}
	int test_arr[4] = { 0 };
	for (int i = 0; i < 4; i++)
	{
		if (test_arr[i] == 0)
		{
			int count = 1; //自己
			for (int j = i + 1; j < 4; j++) { //從下一位開始讀
				if (arr_n[i] == arr_n[j]) {
					count++;
					test_arr[j] = 1;
				}
			}
			printf("%d%d", count, arr_n[i]);
		}
	}
}
// 剛接觸程式的話小難
// 沒用陣列或迴圈我還不知道怎麼做
// 一開始WA只有60分，是因為依次放數字的邏輯搞錯，要由最左邊開始讀
