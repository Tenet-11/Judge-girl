#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void swap(int* a, int* b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

void printarr(int arr[], int size)
{
	for (int i = 0; i < size; i++) {
		if (i == size - 1) {
			printf("%d\n", arr[i]);
			return;
		}
		printf("%d ", arr[i]);
	}
}

// 新增排序函式
void sort(int arr[], int start, int end) {
	for (int i = start; i < end; i++) {
		for (int j = i + 1; j <= end; j++) {
			if (arr[i] > arr[j]) {
				swap(&arr[i], &arr[j]);
			}
		}
	}
}
//差在每個排列要按照字典序去排

void permute(int arr[], int start, int end,int size)
{
	if (start == end) {
		printarr(arr, size);
		return;
	}
	
	for (int i = start; i <= end; i++)
	{
		sort(arr, start, end);
		swap(&arr[start], &arr[i]);
		permute(arr, start + 1, end,size);
		swap(&arr[i], &arr[start]);
	}
}

int main()
{
	int N;
	int arr[1000];
	scanf("%d", &N);
	for (int i = 0; i < N; i++) {
		scanf("%d", &arr[i]);
	}

	permute(arr, 0, N - 1, N);
}
//可以說是排列組合集大成了，還加上了字典的搜索法
//162題概念+sort
