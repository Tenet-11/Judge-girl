#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <string.h>
#include <limits.h>
#include <stdlib.h>

// 難題，要花時間慢慢理解

// 定義結構 pair，存儲字元的 ASCII 編碼和其出現頻率
typedef struct pair {
    int frequency;  // 字元出現的頻率
    char charASCII; // 字元的 ASCII 編碼
} pair;

// 比較函數，用於 qsort 排序
int compare(const void* a, const void* b) {
    pair* pa = (pair*)a; // 將 void 指標轉換為 pair 型態的指標
    pair* pb = (pair*)b;

    // 如果頻率不同，先比較頻率，頻率小的排前面
    if (pa->frequency != pb->frequency) {
        return pa->frequency - pb->frequency;
    }

    // 如果頻率相同，則比較 ASCII 值，ASCII 值大的排前面
    return pb->charASCII - pa->charASCII;  // 由大到小排序
}

// 輸出函數，輸出各個字元的 ASCII 和頻率
void print(pair* myData) {
    int i;
    for (i = 0; i < 95; i++) {
        // 當頻率為 0 時，不進行輸出
        if (myData[i].frequency != 0) {
            printf("%d %d\n", myData[i].charASCII, myData[i].frequency);  // 輸出 ASCII 值和頻率
        }
    }
}

int main() {
    // 動態分配記憶體給 myData，儲存 95 個 pair
    struct pair* myData = (struct pair*)malloc(95 * sizeof(struct pair));
    int i, len, flag = 0;
    char str[9999];  // 字串用來儲存輸入

    // 讀取輸入的字串
    while (gets(str) != NULL) {
        if (flag != 0) printf("\n");
        flag++;

        // 初始化 myData 陣列，將每個字符的頻率設為 0，並設定 charASCII 從 32 開始
        for (int i = 0; i < 95; i++) {
            myData[i].frequency = 0;  // 頻率設為 0
            myData[i].charASCII = i + 32;  // ASCII 值從 32 開始
        }

        // 遍歷字串，統計每個字符的頻率
        for (int i = 0; str[i] != '\0'; i++) {
            if (str[i] >= 32 && str[i] <= 126) {  // 只處理可打印字符
                myData[str[i] - 32].frequency++;  // 更新對應字符的頻率
            }
        }

        // 使用 qsort 對 myData 陣列排序
        qsort(myData, 95, sizeof(pair), compare); // 比較函數決定排序邏輯
        print(myData);  // 輸出排序後的結果
    }
    free(myData);  // 釋放動態分配的記憶體
    return 0;
}
