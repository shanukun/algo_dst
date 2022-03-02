#include <bits/stdc++.h>
using namespace std;
#define int long long
#define debug(x) cerr << #x << " : " << x << endl
#define ff first
#define ss second

const int N = 1e7 + 3;
vector<bool> pr(N, true);
int32_t main() {
    pr[0] = pr[1] = false;
    for (int i = 2; i < N; i++) {
        if (pr[i]) {
            for (int j = 2 * i; j < N; j += i) {
                pr[j] = false;
            }
        }
    }

    int n, num;
    cin >> n;
    num = n;
    unordered_set<int> st;
    for (int i = 2; i * i <= n && num > 0; i++) {
        if (num % i == 0 && pr[i]) {
            st.insert(i);
            while (num % i == 0) 
                num /= i;
        }
    }
    if (num > 0) {
        st.insert(num);
    }

    int ans = 1;
    for (int x : st) 
        ans *= x;
    cout << ans << endl;
}
