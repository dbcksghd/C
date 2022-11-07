#include<stdio.h>
#include<stdlib.h>
#include <time.h>

#define MAX_SIZE 10
int arr[MAX_SIZE];

int partition(int left, int right) {
    int pivot = arr[left];
    int low = left + 1;
    int high = right;
    int temp;
    do {
        while (arr[low] < pivot) {
            low++;
        }
        while (arr[high] > pivot) {
            high--;
        }
        if (low < high) {
            // 값 교환
            temp = arr[low];
            arr[low] = arr[high];
            arr[high] = temp;
        }
    } while (low < high);
    temp = arr[left];
    arr[left] = arr[high];
    arr[high] = pivot;
    return high;
}

void quick_sort(int left, int right) {
    // left는 정렬해야 할 배열의 첫 인덱스 값, right는 마지막 인덱스 값
    if (left < right) {
        int q = partition(left, right); // partition함수는 피봇의 위치(인덱스)를 반환
        quick_sort(left, q - 1);
        quick_sort(q + 1, right);
    }
}

int main() {
    srand(time(NULL));
    int n = MAX_SIZE;
    for (int i = 0; i < n; i++) arr[i] = rand() % 100;

    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]); // 정렬 전
    }

    printf("\n");

    quick_sort(0, n - 1);
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]); // 정렬 후
    return 0;
}