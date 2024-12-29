#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

// 這題是真難，從數學邏輯上就有難度還要化作程式碼，期中考大魔王之一
// 建議先畫出來找規律
int main()
{
	int second;
	int x = 0, y = 0;
	scanf("%d", &second);

	double sqrt_second = sqrt(second);
	int int_sqrt_second = (int)sqrt(second); //代表將平方根的數取整

	int a = 0;
	if (sqrt_second == int_sqrt_second) {
		a = sqrt_second;
		if (a % 2 == 1)
		{
			x = 1, y = a;
			printf("%d %d", x, y);
		}
		else
		{
			x = a, y = 1;
			printf("%d %d", x, y);
		}
		return 0;
	}
	else a = int_sqrt_second + 1;
	

	int current_value = a * a;
	int last_value = (a - 1) * (a - 1);
	double diff_value = current_value - last_value;
	int  mid_value = (diff_value + 1) / 2;// 這樣寫可以找到中位數

	
	int value = second - int_sqrt_second * int_sqrt_second;
	 if (mid_value==value)
	 {
		x = a, y = a;
		printf("%d %d", x, y);
		return 0;
	 }
	 
	 if (a % 2 == 1)
	 {
		 if (value < mid_value) {
			 x = a, y = value;
			 printf("%d %d", x, y);
		 }
		 else
		 {
			 x = a - (value - mid_value);
			 y = a;
			 printf("%d %d", x, y);
		 }
	 }
	 else
	 {
		 if (value < mid_value) {
			 x = value, y = a;
			 printf("%d %d", x, y);
		 }
		 else
		 {
			 x = a;
			 y = a - (value - mid_value);
			 printf("%d %d", x, y);
		 }
	 }
}
