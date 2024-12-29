#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>

int leapYear(int year) 
{
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

int main()
{
    int year, month, day; 
    scanf("%d %d %d", &year, &month, &day);

    int totalDay = day;  // 當前月的天數

    // 使用 if 條件來累加天數
    if (month > 1) totalDay += 31;  
    if (month > 2) totalDay += leapYear(year) ? 29 : 28;  
    if (month > 3) totalDay += 31;  
    if (month > 4) totalDay += 30;  
    if (month > 5) totalDay += 31;  
    if (month > 6) totalDay += 30;  
    if (month > 7) totalDay += 31;  
    if (month > 8) totalDay += 31;  
    if (month > 9) totalDay += 30;  
    if (month > 10) totalDay += 31; 
    if (month > 11) totalDay += 30; 

    printf("%d\n", totalDay);
}

// 有用到bool對錯判斷的話開stdbool.h
