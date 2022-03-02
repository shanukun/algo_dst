#include <bits/stdc++.h>
using namespace std;
#define int long long
#define debug(x) cerr << #x << " : " << x << endl
#define ff first
#define ss second

int32_t main() {
    int n, m, num;
    cin >> n >> m;
    vector<int> st;
    for (int i = 0; i < n; i++) {
        cin >> num;
        st.push_back(num);
    }
    sort(st.begin(), st.end());
    for (int i = 0; i < m; i++) {
        cin >> num;
        auto it = upper_bound(st.begin(), st.end(), num);
        it--;
        int cnt = it - st.begin() + 1;
        cout << cnt << " ";
    }
    cout << endl;

}
