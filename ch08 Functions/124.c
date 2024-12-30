#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "D_size.h"

int D_size(int S, int D) {
    while (D > 0) {
        D -= S;
        S++;
    }
    return S - 1;
}
