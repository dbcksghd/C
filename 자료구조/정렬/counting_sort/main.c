#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX_SIZE 10

void counting_sort(int *arr) {
    int countArray[MAX_SIZE + 1] = {0,}; //모든 범위를 포함하는 배열 선언
    for (int i = 0; i < MAX_SIZE; i++) {
        countArray[arr[i]]++;
    }
    for (int i = 0; i <= MAX_SIZE; i++) {
        for (int j = 0; j < countArray[i]; j++) {
            printf("%d ", i);
        }
    }
}

int main() {
    srand(time(NULL));
    int arr[MAX_SIZE];
    for (int i = 0; i < MAX_SIZE; i++) {
        arr[i] = rand() % MAX_SIZE;
    }
    counting_sort(arr);
}