#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include "LastElement.h"

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int extractMax(int* stone, int stoneSize) {
    int max = stone[0];
    int max_index = 0;
    for (int i = 0; i < stoneSize; i++) {
        if (stone[i] > max) {
            max = stone[i];
            max_index = i;
        }
    }
    swap(&stone[max_index], &stone[stoneSize - 1]);
    return max;
}

void insert(int* stone, int stoneSize, int value) {
    stone[stoneSize - 1] = value; //把diff放進最後一位
}

int lastStoneWeight(int* stones, int stonesSize) {
    
    //這是核心我怎麼給忘了
    while (stonesSize > 1) {
        
        int y = extractMax(stones, stonesSize);
        stonesSize--;
        int x = extractMax(stones, stonesSize);
        stonesSize--;

        if (x != y) {
            int diff = y - x;
            stonesSize++;
            insert(stones, stonesSize, diff);
        }
    }
    return stonesSize == 0 ? 0 : stones[0];
}
