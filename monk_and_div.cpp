#include <bits/stdc++.h>
using namespace std;
const int N = 2e5;

int main()
{
    int n, t, p, q;
    cin >> n;

    vector<int> cnt(N + 1, 0);
    vector<int> div(N + 1, 0);
    vector<int> a(n + 1);

    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        cnt[a[i]]++;
    }

    for (int i = 1; i <= N; ++i)
        for (int j = i; j <= N; j += i)
                div[i] += cnt[j];

    cin >> t;
    while (t--) {
        cin >> p >> q;
        long long lcm = 1ll * p * q / __gcd(p, q); 
        if (lcm > N)
            cout << div[p] + div[q] << endl;
        else
            cout << div[p] + div[q] - div[lcm] << endl;
    }

}
