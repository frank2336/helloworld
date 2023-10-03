#include <stdio.h>
#include <iostream>
#include <algorithm>
using namespace std;

const int N = 1e6 + 10; // 如果赋值1e10+10，在洛谷提交代码时，编译就会失败
int f[N];

int main(void) {
    int n = 0;

    cin >> n;

    for (int i=1; i<=n; i++) {
        if (i==1) {
            f[i] = 1;
        } else if (i < 5) {
            f[i] = min(f[i-1], f[i-2]) + 1;
        } else if (i>=5) {
            f[i] = min(min(f[i-1], f[i-2]), f[i-5]) + 1;
        }
    }
    cout << f[n] << endl;
    return 0;
}

// 凑零钱2，动态规划
