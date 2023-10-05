// 最大连续子序列，还需要输出数列的首尾的位置
#include <stdio.h>
#include <iostream>
#include <algorithm>
using namespace std;

const int N = 1ll<<20;
int dp[N];
int A[N];
int pos[N];       // position, 存储起始位置

int main(void) {
    int n;
    // cout << "hello world" << endl;
    cin >> n;
    for (int i=0; i<n; i++) {
        cin >> A[i];
    }
    
    dp[0] = A[0];
    pos[0] = 0;
    for (int i=1; i<n; i++) {
        dp[i] = max(dp[i-1]+A[i], A[i]);
        if (dp[i-1] >= 0) {
            pos[i] = pos[i-1];
        } else {
            pos[i] = i;
        }
    }
    int k = 0;
    for (int i=0; i<n; i++) {
        if (dp[i] > dp[k]) {
            k=i;
        }
    }
    if (dp[k] >= 0) {
        cout << dp[k] << " ";
        cout << A[pos[k]] << " " << A[k] << endl;
    } else {
        cout << "0" << " ";
        cout << A[0] << " " << A[n-1] << endl;
    }

    return 0;
}

// 最大连续子序列，还需要输出数列的首尾的位置
