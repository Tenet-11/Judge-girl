#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "mysum.h"
int mysum(int* a, int size) {
	//未額外定義的話 *a等於data[0]
    int sum = 0;
    for (int i = 0; i < size; i++)
	{
        sum += *a; //a是data陣列[0]，a+1是data陣列[1]，以此類推...
        a++;
	}
    return sum;
}
