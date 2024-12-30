#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include"lcm.h"

int lcm(int a, int b) {
    for (int i = a; i <= a * b; i++) { //最小公倍數的作法
        if (i % a == 0 && i % b == 0) {
            return i;
        }
   }
}
