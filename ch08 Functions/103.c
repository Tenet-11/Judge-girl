#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "binarysearch.h"

int binarysearch(int data[], int search, int n) {  //search是要比對的數字。n是陣列中有幾個元素
    int left = 0;
    int right = n - 1;
    while (left <= right)
    {
        int mid = left + (right - left) / 2;
        if (data[mid] == search) {
            return mid;   //這裡的return mid指的就會是回傳mid的值
        }
        if (data[mid] > search) {
            right = mid - 1;
        }
        else if (data[mid] < search) {
            left = mid + 1;
        }
    }
    return -1;
}
