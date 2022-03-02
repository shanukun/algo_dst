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
    int alp[26] = {0};
    int i = 0, sm = 0, qc = 0; 
    int j = i + 25;
    bool fl = false;
    while (j < n) {
        for (int k = i; k <= j; k++)
            if (s[k] == '?')
                qc++;
            else
                alp[s[k] - 'A'] = 1;
        for (int p = 0; p < 26; p++)
            sm += alp[p];
        if (26 - sm == qc) {
            fl = true;
            break;
        } else {
            memset(alp, 0, sizeof(alp));
            sm = 0;
            qc = 0;
            i++;
            j++;
        }
    }
    if (fl) {
        vector<char> v;
        for (int m = 0; m < 26; m++) {
            if (alp[m] == 0) {
                v.push_back('A' + m);
            }
        }
        int ind = 0;
        for (int k = 0; k < n; k++) {
            if (s[k] == '?') {
                if (k >= i && k <= j) {
                    s[k] = v[ind++];
                } else {
                    s[k] = 'A';
                }
            }
        }
        cout << s << endl;
    } else {
        cout << -1 << endl;
    }
}
