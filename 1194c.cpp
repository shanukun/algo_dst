#include <bits/stdc++.h>
using namespace std;
#define int long long
#define debug(x) cerr << #x << " : " << x << endl
#define ff first
#define ss second

int32_t main() {
    int t;
    cin >> t;
    while (t--) {
        string s, t, p;
        cin >> s >> t >> p;
        int tal[26] = {0};
        int pal[26] = {0};
        for (int i = 0; i < (int) s.size(); i++)
            pal[s[i] - 'a']++;
        for (int i = 0; i < (int) p.size(); i++)
            pal[p[i] - 'a']++;
        for (int i = 0; i < (int) t.size(); i++)
            tal[t[i] - 'a']++;
        bool fl = true;
        int i = 0, j = 0;
        while (i < (int) s.size()) {
            bool fd = false;
            while (j < (int) t.size()) {
                if (s[i] == t[j]) {
                    fd = true;
                    j++;
                    break;
                }
                j++;
            }
            i++;
            fl = fl && fd;
        }
        bool cfl = true;
        for (int i = 0; i < 26; i++) {
            if (pal[i] < tal[i])
                cfl = false;
        }
        cout << (fl && cfl ? "YES" : "NO") << endl;
    }
}
