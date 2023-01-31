#include <stdio.h>

int main() {
    int arr[8] = {90, 10, 20, 50, 30, 70, 10, 30};
    int bs[8], result = 0;
    bs[0] = arr[0];
    for (int i = 1; i < 8; i++) {
        if (arr[i] > bs[result]) bs[++result] = arr[i];
        else {
            int start = 0, end = result;
            while (start < end) {
                int mid = (start + end) / 2;
                if (arr[i] > bs[mid]) start = mid + 1;
                else end = mid;
            }
            int pos = end;
            bs[pos] = arr[i];
        }
    }
    printf("%d", result + 1);
    return 0;
}