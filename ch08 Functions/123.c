#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "bin.h"
#include "hex.h"

int bin(int n) {
    int arr[100] = { 0 };
    int i = 0;
    int count = 0;
    while (n != 0) {
        arr[i] = n % 2;
        if (arr[i] == 1) {
            count++;
        }
        n /= 2;
        i++;
    }
    return count;
}

int hex(int n) {
    int ten_n = 0;
    int base = 1;
    while (n != 0)
    {
        int temp = n % 10;
        base *= 16;
        ten_n += temp * base;
        n /= 10;
    }

    int arr[100] = { 0 };
    int i = 0;
    int count = 0;
    while (ten_n != 0) {
        arr[i] = ten_n % 2;
        if (arr[i] == 1) {
            count++;
        }
        ten_n /= 2;
        i++;
    }
    return count;
}
