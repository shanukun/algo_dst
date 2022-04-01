#include <bits/stdc++.h>
using namespace std;
#define int long long
#define debug(x) cerr << #x << " : " << x << endl
#define ff first
#define ss second
const int N = 1e6;

int32_t main() {
    int n;
    cin >> n;

    vector<int> ans;
    while (n > 0) {
        string num;
        int d = n;
        while (d > 0) {
            if (d % 10 > 0)
                num += '1';
            else 
                num += '0';
            d /= 10;
        }
        reverse(num.begin(), num.end());
        int r = stoi(num);
        ans.push_back(r);
        n -= r;
    }

    cout << ans.size() << endl;
    for (int x : ans)
        cout << x << " ";
    cout << endl;
}
