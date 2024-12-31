#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "getDecimalValue.h"

int getDecimalValue(struct ListNode* head)
{
    int sum = 0;
    while (head != NULL) {
        sum = sum * 2 + head->val;
        head = head->next;
    }
    return sum;
}

// 輸入二進位，並一位一位輸入，採用遞迴方式輸入，資料存放採用linked list
// 例如數字6的二進位是 1 1 0
// 表示有三個結構，第一個結構的val存1，第一個結構的next紀錄第二個結構，第二個結構的val存1，第二個結構的next紀錄第三個結構，第三個結構的val存0，第三個結構的next紀錄NULL
