#include <stdio.h>
#include <iostream>
#include <algorithm>

using namespace std;

const int N = 1e5 + 10;
int f[N];

int main(void)
{
    int n = 0;

    cin >> n;
    for (int i=1; i<=n; i++) {
        if (i<5) {
            f[i] = f[i-1] + 1;
        } else if (i<11) {
            f[i] = min(f[i-1], f[i-5]) + 1;
        } else {
            f[i] = min(min(f[i-1], f[i-5]), f[i-11]) + 1;
        }
    }
    cout << f[n] << endl;
    return 0;
}

// 凑零钱，动态规划
