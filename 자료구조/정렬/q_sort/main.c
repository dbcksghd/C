#include<stdio.h>
#include<stdlib.h>
#include <time.h>

int comp(const void *a, const void *b) {
    return (*(int *) a - *(int *) b);
}

int main() {
    srand(time(NULL));
    int n = 10, arr[10];
    for (int i = 0; i < n; i++) {
        arr[i] = rand() % 100;
    }
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]); // 정렬 전
    }

    printf("\n");

    qsort(arr, n, sizeof(int), comp);

    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);  // 정렬 후
    }
    return 0;
}