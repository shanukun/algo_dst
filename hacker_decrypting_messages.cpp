#include <bits/stdc++.h>
using namespace std;

const int N = 1e6;
vector<int> mp(N + 1, 0);
vector<bool> d(N + 1, false);
vector<bool> cnt(N + 1, false);
int main()
{
    int n, q;
    cin >> n >> q;

    for (int i = 2; i <= N; ++i)
        if (mp[i] == 0)
            for (int j = i; j <= N; j += i)
                mp[j] = i;

    int el;
    for (int i = 0; i < n; i++) {
        cin >> el;
        cnt[el] = true;
    }

    d[1] = true;
    for (int i = 2; i <= N; i++)
        if (cnt[i])
            for (long long int j = i; j <= N; j *= i)
                d[j] = true;

    int num, sp;
    while (q--) {
        cin >> num;
        sp = num;

        vector<int> fac;
        while (sp > 1) {
            int pf = mp[sp];
            while (sp % pf == 0)
                sp /= pf;
            fac.push_back(pf);
        }

        bool flg = false;
        for (int i = 0; i < int(fac.size()); ++i) {
            for (int j = i; j < int(fac.size()); ++j) {
                int prod = fac[i] * fac[j];
                if (num % prod == 0) {
                    int cnum = num / prod;
                    if (d[cnum]) {
                        flg = true;
                        break;
                    }
                }
            }
            if (flg)
                break;
        }
        cout << (flg ? "YES" : "NO") << endl;
    }
}
