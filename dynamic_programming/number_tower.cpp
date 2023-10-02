// 数塔问题
#include <stdio.h>
#include <iostream>
#include <algorithm>
using namespace std;

const int N = 1e4+10;
int dp[N][N];
int f[N][N];

int main(void) {
    int n;
    cin >> n;

    for (int i=0; i<n; i++) {
        for (int j=0; j<=i; j++) {
            cin >> f[i][j];
        }
    }

    for (int i=n-1; i>=0; i--) {
        for (int j=0; j<=i; j++) {
            if (i==n-1) {
                dp[i][j] = f[i][j];
            } else {
                dp[i][j] = max(dp[i+1][j], dp[i+1][j+1]) + f[i][j];
            }
        }
    }
    cout << dp[0][0] << endl;
    return 0;
}
