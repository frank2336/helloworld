/*
 T239053 【高精度】高精度减法
 https://www.luogu.com.cn/problem/T239053
 */

#include <bits/stdc++.h>
using namespace std;

const int N = 1e3 + 10;
int a[N], b[N], c[N];

bool cmp(string s1, string s2) {
    if (s1.size() < s2.size()) {
        return true;
    } else if (s1.size() > s2.size()) {
        return false;
    } else {
        if (s1 < s2) {
            return true;
        } else {
            return false;
        }
    }
}

int main()
{
    string s1, s2;
    cin >> s1 >> s2;
    int lena, lenb, lenc;
    
    /*
     bool neg;
     neg = cmp(s1, s2);
     
     if (neg) {
     lena = s2.size();
     for (int i=0; i<lena; i++) {
     a[i] = s2[lena-i-1] - '0';
     }
     lenb = s1.size();
     for (int i=0; i<lenb; i++) {
     b[i] = s1[lenb-i-1] - '0';
     }
     } else {
     lena = s1.size();
     for (int i=0; i<lena; i++) {
     a[i] = s1[lena-i-1] - '0';
     }
     lenb = s2.size();
     for (int i=0; i<lenb; i++) {
     b[i] = s2[lenb-i-1] - '0';
     }
     }
     */
    
    if (cmp(s1, s2)) {
        swap(s1, s2);
        cout << "-";
    }
    lena = s1.size();
    for (int i=0; i<lena; i++) {
        a[i] = s1[lena-i-1] - '0';
    }
    lenb = s2.size();
    for (int i=0; i<lenb; i++) {
        b[i] = s2[lenb-i-1] - '0';
    }
    
    lenc = lena;
    
    for (int i=0; i<lenc; i++) {
        if (a[i] < b[i]) {
            a[i] += 10;
            a[i+1] --;
        }
        c[i] = a[i] - b[i];
    }
    
    while (lenc>0 && c[lenc-1] == 0) lenc --;
    /*
     if (neg) {
     cout << "-";
     }
     */
    for (int i=0; i<lenc; i++) {
        cout << c[lenc -i -1];
    }
}
