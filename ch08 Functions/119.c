#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "count_ones.h"

int count_ones(int dec_num) {
    int number = dec_num;
    int sum_1 = 0;
    while (number != 0)
    {
        sum_1 += number % 2;
        number /= 2;
    }
    return sum_1;
}//用10進位怎麼拆解位數的想法切入
