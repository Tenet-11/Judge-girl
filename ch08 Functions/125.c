#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "Jolly_Jumpers.h"

void Jolly_Jumpers(int Array[], int size) {
    int arr1[1000] = { -1 }; //放相鄰兩整數的差
    for (int i = 0; i < size - 1; i++) {
        arr1[i] = Array[i + 1] - Array[i];
        if (arr1[i] < 0) arr1[i] = -arr1[i];
    }

    int arr2[1000] = { -1 }; //放範圍1到n-1
    for (int i = 0; i < size - 1; i++)
    {
        arr2[i] = i + 1;
    }

    int test_arr[1000] = { 0 };
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - 1; j++) {
            if (arr2[i] == arr1[j]) {
                test_arr[i] = 1;
                break;
            }
        }
    }
    
    int test = 0;
    for (int i = 0; i < size - 1; i++) {
        if (test_arr[i] != 1) {
            test = 1;
            break;
        }
    }

    if (test == 0) printf("Jolly");
    else printf("Not jolly");
}
