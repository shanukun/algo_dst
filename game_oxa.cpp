#include <bits/stdc++.h>
using namespace std;

long long sets(vector<int> &v, long long ag, int op, int i)
{
    if (i == int(v.size()))
        return ag;
    long long sp = ag;
    op %= 3;
    switch(op) {
        case 0: ag |= v[i];
                break;
        case 1: ag ^= v[i];
                break;
        case 2: ag += v[i];
                break;
    }
    return  max(sets(v, sp, op, i + 1), sets(v, ag, op + 1, i + 1));
}

int main() 
{
    int t, n, fl;
    string s;
    cin >> t;

    while (t--) {
        cin >> s;
        fl = (s != "Even");
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
            cin >> v[i];
        long long ans = 0;
        for (int i = 0; i < n; i++)
            ans = max(ans, sets(v, v[i], 0, i + 1));
        if (ans % 2 == fl)
            cout << "Monk" << endl;
        else 
            cout << "Mariam" << endl;
    }
}
