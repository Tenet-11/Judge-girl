// Tips: 利用相似三角形、或微積分找極值

#include <stdio.h>
#include <math.h>

int main() {
    const double HEIGHT = 5;

    double vision, obstacle, distance;
    int floor;
    scanf("%lf %d %lf %lf", &vision, &floor, &obstacle, &distance);

    double h = floor * HEIGHT;
    int climbs = 0;

    // STEP 1: 先爬到比障礙物高
    while (h <= obstacle) {
        h += HEIGHT;
        climbs++;
    }

    // STEP 2: 逐層檢查是否能看到地面
    while (1) {
        if (h > vision) {                 // 高度 > 視力極限 → 一定無法
            printf("unable\n");
            break;
        }

        double dh = h - obstacle;         // 高度差
        double x = distance * obstacle / dh;
        double L = sqrt((distance + x)*(distance + x) + h*h);

        if (L <= vision) {
            printf("%d\n", climbs);
            break;
        }

        // 若仍無法 → 再爬一層
        h += HEIGHT;
        climbs++;
    }

    return 0;
}
