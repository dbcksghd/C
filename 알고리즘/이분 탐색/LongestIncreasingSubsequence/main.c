#include <stdio.h>

int main() {
    int arr[8] = {90, 10, 20, 50, 30, 70, 10, 30};
    int bs[8], rs = 0;
    bs[0] = arr[0];
    for (int i = 1; i < 8; i++) {
        if (arr[i] > bs[rs]) bs[++rs] = arr[i];
        else {
            int s = 0, e = rs;
            while (s < e) {
                int mid = (s + e) / 2;
                if (arr[i] > bs[mid]) s = mid + 1;
                else e = mid;
            }
            int pos = e;
            bs[pos] = arr[i];
        }
    }
    printf("%d", rs + 1);
    return 0;
}