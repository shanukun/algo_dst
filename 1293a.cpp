#include <bits/stdc++.h>
using namespace std;

int main() {
    long long t, n, s, k, num;
    cin >> t;

    while (t--) {
        cin >> n >> s >> k;
        unordered_map<long long, bool> m;
        for (int i = 0; i < k; i++) {
            cin >> num;
            m[num] = true;
        }
        long long ans;
        for (int i = 0; i <= k; i++) {
            if (s + i <= n && m.find(s + i) == m.end()) { 
                ans = i; 
                break; 
            }
            if (s - i > 0 && m.find(s - i) == m.end()) { 
                ans = i; 
                break; 
            }
        }
        cout << ans << endl;
    }
}
