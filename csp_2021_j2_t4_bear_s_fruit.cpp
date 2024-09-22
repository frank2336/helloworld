// 小熊的果篮
#include <bits/stdc++.h>
using namespace std;

const int N = 2e5 +5;
struct Fruit {
    bool is_picked;
    int type;
};

int main(void)
{
    int n;
    Fruit s_f[N];

    cin >> n;
    for (int i=1; i<=n; i++) {
        s_f[i].is_picked = false;
        cin >> s_f[i].type;
    }
    // int remain = n;
    int amount = 0;
    // int last_picked = -1;
    while (amount < n) {
        int last_picked = -1;
        for (int i=1; i<=n; i++) {
            if (!s_f[i].is_picked && s_f[i].type != last_picked) {
                s_f[i].is_picked = true;
                last_picked = s_f[i].type;
                //remain --;
                amount ++;
                cout << i << " ";
            }
        }
        cout << endl;
    }
    /*
    if (remain == 1) {
        for (int i=1; i<=n; i++) {
            if(!s_f[i].is_picked) {
                cout << i << endl;
                remain --;
            }
        }
    }
    */
    return 0;
}

