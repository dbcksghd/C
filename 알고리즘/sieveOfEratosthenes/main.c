#include <stdio.h>
#include <math.h>

#define MAX_SIZE 100

int main() {
    int arr[MAX_SIZE + 1] = {0};
    int len = sqrt(MAX_SIZE);
    for (int i = 2; i <= len; i++) {
        if (arr[i] == 0) {
            for (int j = i * 2; j <= MAX_SIZE; j += i) {
                arr[j] = 1;
            }
        }
    }
    for (int i = 2; i <= MAX_SIZE; i++) {
        if (arr[i] == 0) printf("%d\n", i);
    }
    return 0;
}