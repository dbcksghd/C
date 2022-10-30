#include<stdio.h>
#include<stdlib.h>
#include <time.h>

#define MAX_SIZE 10

int arr[MAX_SIZE];

void Bubble_sort() {
    int temp;
    for (int i = MAX_SIZE - 1; i >= 1; i--) { // 총 단계는 배열 사이즈-1 수행됨
        for (int j = 0; j <= i - 1; j++) { // 뒤에서부터 거품처럼 정렬되는 구조
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    srand(time(NULL));
    int n = MAX_SIZE;
    for (int i = 0; i < n; i++) {
        arr[i] = rand() % 100;
    }
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]); // 정렬 전
    }

    printf("\n");

    Bubble_sort();

    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);  // 정렬 후
    }
    return 0;
}