#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "oddEvenList.h"

struct ListNode* oddEvenList(struct ListNode* head)
{
    if (!head || !head->next) return head;  

    struct ListNode* odd = head;
    struct ListNode* even = head->next;
    struct ListNode* evenhead = even;

    while (even && even->next) {  //even跟even的下一步不為NULL才執行
        odd->next = even->next;
        odd = odd->next;

        even->next = odd->next;
        even = even->next;
    }
    odd->next = evenhead;  //odd的下一步是偶數的頭
    return head;
}

// 下面是題目給的主函式(不用更正)
void Construct(struct ListNode* node, int length, int num)
{
    int a;
    scanf("%d", &a);
    node->val = a;

    if (num >= length)
    {
        node->next = NULL;
        return;
    }
    node->next = (struct ListNode*)malloc(sizeof(struct ListNode));
    num++;
    Construct(node->next, length, num);
}

int main()
{
    struct ListNode* head;
    int n, a, length;
    head = (struct ListNode*)malloc(sizeof(struct ListNode));
    scanf("%d", &n);
    while (n--)
    {
        scanf("%d", &length);
        Construct(head, length, 1);
        struct ListNode* ans = oddEvenList(head);
        struct ListNode* ptr;

        ptr = ans;

        while (ptr != NULL)
        {
            printf("%d ", ptr->val);
            ptr = ptr->next;
        }
        printf("\n");
    }
}
