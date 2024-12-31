#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int len, num;
struct DNA {
    char string[50];
    int order;
};
typedef struct DNA DNA;

int compare(const void* a, const void* b) {
    DNA* dna1 = (DNA*)a;
    DNA* dna2 = (DNA*)b;
    return dna1->order - dna2->order;
}

int main()
{
    int tests;
    scanf("%d", &tests);
    for (int a = 0; a < tests; a++) {
        scanf("%d %d", &len, &num);
        DNA* dnaArray = (DNA*)malloc(num * sizeof(DNA));
        for (int i = 0; i < num; i++) {
            scanf("%s", dnaArray[i].string);
        }

        //計算有幾個不符合順序
        for (int i = 0; i < num; i++) {
            dnaArray[i].order = 0;
            for (int j = 0; j < len; j++) {
                for (int k = j + 1; k < len; k++) {
                    if (dnaArray[i].string[j] > dnaArray[i].string[k]) {
                        dnaArray[i].order++;
                    }
                }
            }
        }
        qsort(dnaArray, num, sizeof(DNA), compare);
        for (int i = 0; i < num; i++) {
            printf("%s\n", dnaArray[i].string);
        }
        free(dnaArray);
    }
}
