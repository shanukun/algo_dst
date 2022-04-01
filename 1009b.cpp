#include <bits/stdc++.h>
using namespace std;
#define int long long
#define debug(x) cerr << #x << " : " << x << endl
#define ff first
#define ss second

int32_t main() {
    string s;
    cin >> s;
    int n = s.size();
    
    int ocnt = 0;
    for (int i = 0; i < n; i++) {
        if (s[i] == '1') ocnt++;
    }
    int f2 = 1;
    string t = "";
    for (int i = 0; i < n; i++) {
        if (s[i] == '2' && f2 == 1) {
            f2 = 0;
            for (int j = 0; j < ocnt; j++) 
                t.push_back('1');
            ocnt = 0;
        }
        if (s[i] != '1')
            t.push_back(s[i]);
    }
    for (int j = 0; j < ocnt; j++) 
        t.push_back('1');

    cout << t << endl;
}
