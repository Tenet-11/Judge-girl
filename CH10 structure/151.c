#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

struct Student
{
    char studentName[20];
    int score;
};

int main()
{
    struct Student students[3];
    
    for (int i = 0; i < 3; i++)
    {
        scanf("%s %d", &students[i].studentName, &students[i].score);
    }

    int sum = 0;
    int max = 0;
    int max_index = -1;

    for (int i = 0; i < 3; i++)
    {
        sum += students[i].score;
        if (max < students[i].score)
        {
            max_index = i;
            max = students[i].score;
        }
    }

    int avg = sum / 3;
    printf("avg = %d\nmax = %s", avg, students[max_index].studentName);
}
