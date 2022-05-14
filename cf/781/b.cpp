#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

int main() {
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); cout.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int n; 
        cin >> n;

        int cnt = 1;
        map<int, int> mp;
        for (int i = 0; i < n; i++) {
            int num;
            cin >> num;
            if (mp.find(num) == mp.end())
                mp[num] = 1;
            else
                mp[num]++;
            cnt = max(mp[num], cnt);
        }

        int c = ceil(log2((n + cnt - 1) / cnt));
        int op = c + (n - cnt);
        cout << op << endl;
    }
}
