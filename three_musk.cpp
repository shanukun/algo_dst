#include <bits/stdc++.h>
using namespace std;

long long fact(int a) 
{
    long long f = 1;
    for (int j = 0; j < 3; j++) {
        f *= a--;
    }
    return f / 6;
}

int main()
{
    int t, n;
    string s;
    cin >> t;
    while (t--) {
        cin >> n;
        vector<int> cnt[5];
        while (n--) {
            cin >> s;
            int mask = 0;
            for (int i = 0; i < int(s.size()); ++i) {
                if (s[i] == 'a')
                    mask = mask | (1 << 0);
                if (s[i] == 'e')
                    mask = mask | (1 << 1);
                if (s[i] == 'i')
                    mask = mask | (1 << 2);
                if (s[i] == 'o')
                    mask = mask | (1 << 3);
                if (s[i] == 'u')
                    mask = mask | (1 << 4);
            }

            for (int i = 0; i < 5; ++i)
                if (mask & (1 << i))
                    cnt[i].push_back(mask);
        }

        long long ans = 0;
        for (int i = 0; i < 5; i++) {
            int si = cnt[i].size();
            if (si >= 3) {
                ans += fact(si);
            }
        }

        for (int i = 1; i < 5; ++i) {
            int cm = 0;
            for (int j = 0; j < int(cnt[i].size()); j++) {
                for (int k = 0; k < int(cnt[i - 1].size()); k++) {
                    if (cnt[i][j] == cnt[i - 1][k])
                        cm++;
                }
            }
            if (cm >= 3)
                ans -= fact(cm);
        }
        cout << ans << endl;
    }

}
