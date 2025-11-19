#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int answers[10005] = {0}; 
    int x;

    for (int i = 0; i < n; i++) {
        scanf("%d", &x);
        answers[x]++;         // 統計每個回答 x 的出現次數
    }

    int total = 0;

    // 對每一種回答 x 做計算
    for (int x = 0; x < 10005; x++) {
        if (answers[x] == 0) continue;

        int cnt = answers[x];     // 有多少隻兔子回答 x
        int groupSize = x + 1;    // 每組顏色族群的人數
        int groups = (cnt + groupSize - 1) / groupSize;  // 取(cnt / groupSize)的上界

        total += groups * groupSize;
    }

    printf("%d\n", total);
    return 0;
}
