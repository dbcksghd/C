#include<stdio.h>
#include<stdlib.h>
#include <time.h>

#define MAX_SIZE 10

int arr[MAX_SIZE];

void selection_sort(int arr[], int n) {
    int least, tmp;
    for (int i = 0; i < n - 1; i++) {   // n-1단계 수행되도록 반복횟수 설정
        least = i;
        for (int j = i + 1; j < n; j++) {    // 각 단계에 맞는 최소값의 인덱스 찾기
            if (arr[least] > arr[j])
                least = j;
        }
        tmp = arr[i];         // 값 교환(제 자리 위치에 최소값 넣기)
        arr[i] = arr[least];
        arr[least] = tmp;
    }
}

int main() {
    srand(time(NULL)); // 씨드 변경 함수
    int n = MAX_SIZE;
    for (int i = 0; i < n; i++) {
        arr[i] = rand() % 100; // 랜덤값 반환 함수
    }
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]); // 정렬 전
    }
    printf("\n");
    selection_sort(arr, n);
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]); // 정렬 후
    }
    return 0;
}