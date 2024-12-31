#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

typedef struct point_t point_t;
struct point_t {
    double x;
    double y;
};

int main()
{
    point_t Quadrant;
    scanf("%lf %lf", &Quadrant.x, &Quadrant.y);
    if (Quadrant.x > 0 && Quadrant.y > 0) {
        printf("第一象限");
    }
    else if (Quadrant.x < 0 && Quadrant.y > 0)
    {
        printf("第二象限");
    }
    else if (Quadrant.x < 0 && Quadrant.y < 0)
    {
        printf("第三象限");
    }
    else if (Quadrant.x > 0 && Quadrant.y < 0)
    {
        printf("第四象限");
    }
}
