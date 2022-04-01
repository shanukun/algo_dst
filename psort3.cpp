#include <bits/stdc++.h>
using namespace std;
#define int long long
#define debug(x) cerr << #x << " : " << x << endl
#define ff first
#define ss second

bool cmp(pair<int, int> a, pair<int, int> b) {
    if (a.ss > b.ss) {
        return true;
    } else if (a.ss == b.ss) {
        if (a.ff <= b.ff)
            return true;
    }
    return false;
}

int32_t main() {
    int n;
    int num;
    cin >> n;
    vector<pair<int, int>> v(n);
    for (int i = 0; i < n; i++) {
        cin >> num;
        v[i] = {num, 0};
    }
    for (int i = 0; i < n; i++) {
        cin >> num;
        v[i] = {v[i].ff, num};
    }
    sort(v.begin(), v.end(), cmp);
    for (int i = 0 ; i < n; i++)
        cout << v[i].ff << " " << v[i].ss << " ";
    cout << endl;
}
