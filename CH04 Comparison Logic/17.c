#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);

    if (a + b <= c || a + c <= b || b + c <= a) {
        printf("not a triangle");
    }
    else if (a == b && b == c) {
        printf("regular triangle");
    }
    else if (a * a + b * b == c * c || a * a + c * c == b * b || b * b + c * c == a * a) {
        printf("rectangular triangle");
    }
    else if (a == b || a == c || b == c) {
        if (a * a + b * b <= c * c || a * a + c * c <= b * b || b * b + c * c <= a * a) {
            printf("isosceles obtuse triangle");
        }
        else {
            printf("isosceles acute triangle");
        }
    }
    else if (a * a + b * b <= c * c || a * a + c * c <= b * b || b * b + c * c <= a * a) {
        printf("obtuse triangle");
    }
    else {
        printf("acute triangle");
    }

    return 0;
}
//或跟且只能兩項兩項比，沒辦法同時三項比
