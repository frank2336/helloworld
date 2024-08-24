// https://www.luogu.com.cn/problem/U284784，【CSP-J 2022 山东】植树节
#include <bits/stdc++.h>
using namespace std;

const int N = 1000010;
int a[N];
int b[N];

int main()
{
    int n = 0;
    int ans =0;
    cin >> n;
    for (int i=0; i<n; i++) {
        int l, r;
        cin >> l >> r;
        b[l] ++;
        b[r+1] --;
    }
    a[0] = b[0];
    for (int i=0; i<N; i++) {
        a[i] = a[i-1] + b[i];
        ans = max(ans, a[i]);
    }
    cout << ans << endl;
    return 0;
}
