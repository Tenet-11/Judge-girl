#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct data {
	char med[16];
	int f;
}Medcine;
//結構體名稱是struct data，變數是Medcine

int main()
{
	int cases;
	scanf("%d", &cases);
	for (int i = 0; i < cases; i++) {
		int n, k;
		scanf("%d %d", &n, &k);
		Medcine* medcinies = (Medcine*)malloc(n * sizeof(Medcine));

		for (int j = 0; j < n; j++) {
			scanf("%s %d", medcinies[j].med, &medcinies[j].f);
		}

		int time = 0;
		while (k > 0) {
			time++;
			for (int j = 0; j < n; j++) { //遍歷各個藥
				if (time % medcinies[j].f == 0 && k > 0) {
					printf("%d %s\n", time, medcinies[j].med);
					k--;
				}
			}
		}
		free(medcinies);
	}
}
