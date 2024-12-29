#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int age;
	float height;
	scanf("%d", &age);
	scanf("%f", &height);

	printf("Your age is: %d\n", age);
	printf("Your height is: %.5fm", height);
}

// 在Vsc上編譯不能用scanf_s，只能用scanf
// 用scanf要記得定義忽略安全警示(我寫的第一行)
