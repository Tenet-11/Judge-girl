#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include"years.h"

void years(int year)
{
    if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0)) {
        printf("%d是閏年", year);
        return;
    }
    else {
        printf("%d是平年", year);
        return;
    }
}
