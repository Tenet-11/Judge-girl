#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "ID_Check.h" 

void ID_Check(char ID[]) {

    int code = 0;
    switch (ID[0]) {
    case 'A':code = 10; break;
    case 'B':code = 11; break;
    case 'C':code = 12; break;
    case 'D':code = 13; break;
    case 'E':code = 14; break;
    case 'F':code = 15; break;
    case 'G':code = 16; break;
    case 'H':code = 17; break;
    case 'I':code = 34; break;
    case 'J':code = 18; break;
    case 'K':code = 19; break;
    case 'L':code = 20; break;
    case 'M':code = 21; break;
    case 'N':code = 22; break;
    case '0':code = 35; break;
    case 'P':code = 23; break;
    case 'Q':code = 24; break;
    case 'R':code = 25; break;
    case 'S':code = 26; break;
    case 'T':code = 27; break;
    case 'U':code = 28; break;
    case 'V':code = 29; break;
    case 'W':code = 32; break;
    case 'X':code = 30; break;
    case 'Y':code = 31; break;
    case 'Z':code = 33; break;
    }

    int a = code % 10;
    int b = code / 10;
    int c = a * 9 + b; //(2)的答案

    int sum = 0;
    int mul = 8;
    for (int i = 1; i <= 8; i++) {
        sum += (ID[i] - '0')*mul;//最後的sum為(3)的答案
        mul--;
    }

    int d = ID[9] - '0';

    if ((c + sum + d) % 10 == 0) {
        printf("real");
    }
    else printf("fake");
}
