#include<stdio.h>

int main() {
    int arr[8] = {90, 10, 20, 50, 30, 70, 10, 30};
    int dp[8] = {0,}, result = 0;
    for (int i = 0; i < 8; i++) {
        int c = arr[i];
        for (int j = 0; j < i; j++) {
            if (c > arr[j]) dp[i] = dp[i] > dp[j] ? dp[i] : dp[j];
        }
        dp[i]++;
        if (result < dp[i]) result = dp[i];
    }
    printf("%d", result);
    //10->20->30->70 = 가장 긴 증가하는 부분 수열은 4
}