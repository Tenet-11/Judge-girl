#define M_PI 3.14159265358979323846
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{
	char str[100]; //宣告了一個可以儲存 100 個字元的字串陣列變數degree
	double radius, degree;
	while (scanf("%lf%lf%s", &radius, &degree, &str) != EOF)
	{
		radius += 6440;

		if (strcmp(str, "min") == 0) //找str有沒有min這個字(字串裡找字的特殊寫法)
		{
			degree /= 60;
		}
		while (degree > 360)
		{
			degree -= 360;
		}
		if (degree > 180 && degree < 360)
		{
			degree = degree - 180; //比平角還大就從另一邊開始看
		}

		double ang = degree * M_PI / 180.0;

		double chord = 2.0 * radius * sin(ang / 2.0);
		double arc = radius * ang;
		printf("%.6lf %.6lf\n", arc, chord);
	}
}

// double要用的是lf不是f
// 我地球半徑本來打錯打成6440，還有不能用角度去算，用徑去算
// 雖然變數型別double寫Lf這裡也可以生出答案，但批改娘不行
// M_PI乖乖用手打，開USE_MATH_DEFINES這函數會CE，GNU_SOURCE也沒辦法用
