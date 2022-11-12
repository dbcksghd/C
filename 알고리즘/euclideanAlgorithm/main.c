#include <stdio.h>

int Euclidean(int a, int b)
{
    int r = a % b;
    if (r == 0) {
        return b;
    }
    return Euclidean(b, r);
}

int main() {
    int a = 10;
    int b = 55;
    printf("%d", Euclidean(a, b)); // 5
    return 0;
}
