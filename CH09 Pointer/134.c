#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include "len.h"

void len(char* arr)
{
    int count = 0;
    while (*arr != '\0')
    {
        count++;
        arr++;
    }
    printf("%d", count);
}
