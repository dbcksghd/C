#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX_SIZE 10

int arr[MAX_SIZE];

void insertion_sort(int arr[], int first, int last, int gap) {
    int i, j, key;
    for (i = first + gap; i <= last; i += gap) {
        key = arr[i];
        for (j = i - gap; j >= 0 && arr[j] > key; j = j - gap) {
            arr[j + gap] = arr[j];
            //원래는 j+1에 j를 넣었지만 지금은 gap만큼 뒤로 밀린 곳에 삽입해야한다.
        }
        arr[j + gap] = key;
        //마찬가지로 j+1에 key를 넣는 것이 아닌 gap만큼 더한 곳에 삽입해야한다.
    }
}

void shell_sort(int arr[], int n) {
    int i, gap;
    for (gap = n / 2; gap > 0; gap /= 2) {
        if (gap % 2 == 0) gap++;
        for (i = 0; i < gap; i++) {
            insertion_sort(arr, i, n - 1, gap);    //insertion_sort 호출
        }
    }
}

int main() {
    int n = MAX_SIZE;
    srand(time(NULL));
    for (int i = 0; i < n; i++) {
        arr[i] = rand() % 100;
    }
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]); // 정렬 전
    }
    printf("\n");

    shell_sort(arr, n);

    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]); // 정렬 후
    }
    return 0;
}