#include <stdio.h>

int main() {
    int arr[8] = {1, 2, 5, 6, 6, 8, 9, 10};
    int find = 6, start = 0, end = 8;
    while (start < end) {
        int mid = (start + end) / 2;
        if (arr[mid] <= find) start = mid + 1;
        else end = mid;
    }
    printf("%d", end);
    return 0;
}