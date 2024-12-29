#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int K, Q, N, kx, ky, qx, qy, nx, ny;

int main() {
    while (scanf("%d %d %d", &K, &Q, &N) == 3) {
        if (K == Q) {
            printf("Illegal state\n");
            continue;
        }
        kx = K / 8;
        ky = K % 8;
        qx = Q / 8;
        qy = Q % 8;
        nx = N / 8;
        ny = N % 8;

        if (qy != ny && qx != nx) {
            printf("Illegal move\n");
            continue;
        }
        if (Q == N || K == N) {
            printf("Illegal move\n");
            continue;
        }
        if (qy == ny && ny == ky) {
            if ((qx > nx && kx < qx && kx >= nx) || (qx < nx && kx > qx && kx <= nx)) {
                printf("Illegal move\n");
                continue;
            }
        }
        else if (qx == nx && nx == kx) {
            if ((qy > ny && ky < qy && ky >= ny) || (qy < ny && ky > qy && ky <= ny)) {
                printf("Illegal move\n");
                continue;
            }
        }
        if ((abs(nx - kx) == 1 && ny == ky) || (nx == kx && abs(ny - ky) == 1)) {
            printf("Move not allowed\n");
            continue;
        }
        bool flag = false;
        if (kx + 1 < 8 && kx + 1 != nx && ky != ny) flag = true;
        if (kx - 1 >= 0 && kx - 1 != nx && ky != ny) flag = true;
        if (ky + 1 < 8 && kx != nx && ky + 1 != ny) flag = true;
        if (ky - 1 >= 0 && kx != nx && ky - 1 != ny) flag = true;
        if (flag) printf("Continue\n");
        else printf("Stop\n");
    }
    return 0;
}
// 這題是真的難到靠北，剛碰一個月程式寫這題會哭出來，我也只討論前三個條件，剩下的問高中同學跟GPT
