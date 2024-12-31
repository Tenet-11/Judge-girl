#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

struct Student {
    int m_id;
    int m_score;
};

int main() {
    struct Student x; //宣告結構體變數
    scanf("%d %d", &x.m_id, &x.m_score);

    printf("(ID: %d, score: %d)", x.m_id, x.m_score);
    return 0;
}
