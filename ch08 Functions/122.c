#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "_A_B_C.h"

void _A_B_C(int num1, int num2) {
    int a = 0, b = 0, c = 0;
    int num1_arr[4] = { 0 }, num2_arr[4] = { 0 };

    int i = 0;
    while (num1 != 0)
    {
        num1_arr[i] = num1 % 10;
        num1 /= 10;
        i++;
    }
    i = 0;
    while (num2 != 0)
    {
        num2_arr[i] = num2 % 10;
        num2 /= 10;
        i++;
    }
    
    for (int i = 0; i < 4; i++)
    {
        if (num1_arr[i] == num2_arr[i])
        {
            a++;
        }
        else
        {
            int count_c = 0;
            for (int j = 0; j < 4; j++)
            {
                if (num1_arr[i] == num2_arr[j]) {
                    b++;
                    count_c = 0;
                    break;
                }
                else count_c = 1;
            }
            if (count_c == 1) {
                c++;
            }
        }
    }
    c = c * 2;
    printf("%dA%dB%dC", a, b, c);
}
//我這個c放的挺巧妙的，因為只要有一位不一樣，那就會有兩個數字不一樣(數字不重複)
