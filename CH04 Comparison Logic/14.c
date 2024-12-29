#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>

int main()
{
    int money;
    scanf("%d", &money);
    if (money < 0)
    {
        printf("error");
        return 0;
    }
    int a, b, c, d, e, f, g;
    if (money / 1000 != 0) {
        a = money / 1000;
        money %= 1000;
        if (a != 0)
            printf("1000: %d\n", a);  
    }
    if (money / 500 != 0) {
        b = money / 500;
        money %= 500;
        if (b != 0)
            printf("500: %d\n", b);
    }
    if (money / 100 != 0) {
        c = money / 100;
        money %= 100;
        if (c != 0)
            printf("100: %d\n", c);
    }
    if (money / 50 != 0) {
        d = money / 50;
        money %= 50;
        if (d != 0)
            printf("50: %d\n", d);
    }
    if (money / 10 != 0) {
        e = money / 10;
        money %= 10;
        if (e != 0)
            printf("10: %d\n", e);
    }
    if (money / 5 != 0) {
        f = money / 5;
        money %= 5;
        if (f != 0)
            printf("5: %d\n", f);
    }
    g = money;
    if (g != 0)
        printf("1: %d", g);
}
