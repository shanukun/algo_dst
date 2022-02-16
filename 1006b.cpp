#include <bits/stdc++.h>
using namespace std;

int dp[2001] = {0};

int main() {
    int n, k;
    cin >> n >> k;

    vector<int> vec(n);
    vector<int> v(n);
    for (int i = 0; i < n; i++)  {
        cin >> v[i];
        vec[i] = v[i];
    }

    sort(v.begin(), v.end());

    int pr = 0;
    for (int i = n - 1; i >= n - k; i--) {
        dp[v[i]]++;
        pr += v[i];
    }

    int cnt = 0;
    vector<int> ln;
    for (int i = 0; i < n && k > 1; i++) {
        cnt++;
        if (dp[vec[i]] == 0) continue;
        dp[vec[i]]--;
        ln.push_back(cnt);
        cnt = 0;
        k--;
    }

    int num = 0;
    cout << pr << endl;
    for (int x: ln) {
        cout << x << " ";
        num += x;
    }
    cout << n - num << endl;

}
