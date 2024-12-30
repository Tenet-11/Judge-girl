#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// 期中考範圍最難的題目，不太可能考，太難了
// 難在需要討論幾種組合，光數學應該就一堆人想不出來了
int main()
{
    int count1x1, count2x2, count3x3, count4x4, count5x5, count6x6;
    int total_boxes, remaining_space, remaining_2x2_space;

    while (scanf("%d %d %d %d %d %d", &count1x1, &count2x2, &count3x3, &count4x4, &count5x5, &count6x6) == 6) {
        if (count1x1 == 0 && count2x2 == 0 && count3x3 == 0 && count4x4 == 0 && count5x5 == 0 && count6x6 == 0)
            break;

        total_boxes = count6x6;  // 裝6x6
        total_boxes += count5x5; // 裝5x5
        remaining_space = count5x5 * 11; // 剩餘空間給1x1
        if (count1x1 <= remaining_space) {
            count1x1 = 0;
        }
        else {
            count1x1 -= remaining_space;
        }

        total_boxes += count4x4; // 裝4x4
        remaining_space = count4x4 * 20; // 剩餘空間給2x2
        if (count2x2 * 4 <= remaining_space) {
            remaining_space -= count2x2 * 4;
            count2x2 = 0;
        }
        else {
            count2x2 -= remaining_space / 4;
            remaining_space = 0;
        }

        if (count1x1 <= remaining_space) { // 剩餘空間給1x1
            remaining_space -= count1x1;
            count1x1 = 0;
        }
        else {
            count1x1 -= remaining_space;
            remaining_space = 0;
        }

        total_boxes += count3x3 / 4; // 裝3x3
        count3x3 %= 4;               // 處理剩下的3x3
        if (count3x3 > 0) total_boxes++;

        if (count3x3 == 1) { // 剩下3個3x3的空間分配
            if (count2x2 >= 5) {
                count2x2 -= 5;
                remaining_space = 7;
            }
            else {
                remaining_space = 27 - count2x2 * 4;
                count2x2 = 0;
            }
        }
        else if (count3x3 == 2) { // 剩下2個3x3的空間分配
            if (count2x2 >= 3) {
                count2x2 -= 3;
                remaining_space = 6;
            }
            else {
                remaining_space = 18 - count2x2 * 4;
                count2x2 = 0;
            }
        }
        else if (count3x3 == 3) { // 剩下1個3x3的空間分配
            if (count2x2 >= 1) {
                count2x2 -= 1;
                remaining_space = 5;
            }
            else {
                remaining_space = 9;
            }
        }

        if (count1x1 <= remaining_space) { // 給1x1
            remaining_space -= count1x1;
            count1x1 = 0;
        }
        else {
            count1x1 -= remaining_space;
            remaining_space = 0;
        }

        total_boxes += count2x2 / 9; // 裝2x2
        count2x2 %= 9;
        if (count2x2 > 0) { // 處理剩下的2x2
            total_boxes++;
            remaining_space = 36 - count2x2 * 4;
        }

        if (count1x1 <= remaining_space) { // 剩餘空間給1x1
            count1x1 = 0;
        }
        else {
            count1x1 -= remaining_space;
            remaining_space = 0;
        }

        total_boxes += count1x1 / 36; // 裝1x1
        if ((count1x1 % 36) > 0) total_boxes++;

        printf("%d\n", total_boxes);
    }
}
