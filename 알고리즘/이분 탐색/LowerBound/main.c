#include <stdio.h>

int main() {
    int arr[8] = {0, 1, 2, 4, 5, 7, 7, 8};
    int find = 4, start = 0, end = 8;
    while (end - start > 0) {
        int mid = (start + end) / 2;
        if (arr[mid] < find) start = mid + 1;
        else end = mid;
    }
    printf("%d", end);
    return 0;
}