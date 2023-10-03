#include <stdio.h>
#include <iostream>
#include <algorithm>
using namespace std;

const int N = 1ll<<20;
int dp[N];
int A[N];

int main(void) {
    int n;
    cin >> n;
    for (int i=0; i<n; i++) {
        cin >> A[i];
    }

    dp[0] = A[0];
    for (int i=1; i<n; i++) {
        dp[i] = max(dp[i-1]+A[i], A[i]);
    }
    int k = 0;
    for (int i=0; i<n; i++) {
        if (dp[i] > dp[k]) {
            k=i;
        }
    }
    cout << dp[k] << endl;
    return 0;
}

// 最大连续子序列
