#include <stdio.h>

int arr[10001] = {0,};

int fibo(int n) {
    if (n <= 1) return n;
    else{
        if (arr[n] != 0) return arr[n];
        arr[n] = fibo(n-1) + fibo(n-2);
        return arr[n];
    }
}

int main() {
    int n = 35;
    printf("%d", fibo(n));
    return 0;
}
