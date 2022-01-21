#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    long long p;
    while (t--) {
        cin >> p;
        int cnt = 0;
        for (int i = 63; i >= 0; --i)
            if ((p & (1LL << i)) != 0)
                cnt++;
        cout << cnt << endl;
    }
}
