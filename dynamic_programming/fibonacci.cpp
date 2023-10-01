#include <stdio.h>
#include <iostream>
using namespace std;

// int N 2^63;
long long f[2^63];

long long fibonacci(int n)
{
    f[0] = 0;
    f[1] = 1;
    if (n>1) {
        for (int i=2; i<=n; i++) {
            f[i] = f[i-2] + f[i-1];
        }
    }
    return f[n];
}

int main(void)
{
    int m, n;

    cin >> m;

    for (int i=0; i<m; i++) {
        cin >> n;
        cout << fibonacci(n) <<endl;
    }

    return 0;
}
