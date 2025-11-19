// 114 期中考題
// 邏輯推理一下: 事實上題目有沒有強調相鄰結果是一樣的，因為就算沒有相鄰我們也可以創造出一條路徑，
除了頭尾之外都被翻轉兩次 (所以不變)。最後其實就是找絕對值最小的扣掉
// 實作上輕輕鬆鬆

#include <stdio.h>
#include <stdlib.h>   // for abs()

int main() {
    int n;
    scanf("%d", &n);

    int negCount = 0;
    int minAbs = 100000;
    int sumAbs = 0;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            int x;
            scanf("%d", &x);

            if (x < 0)
                negCount++;

            sumAbs += abs(x);

            if (abs(x) < minAbs)
                minAbs = abs(x);
        }
    }

    if (negCount % 2 == 0)
        printf("%d\n", sumAbs);
    else
        printf("%d\n", sumAbs - 2 * minAbs);

    return 0;
}
