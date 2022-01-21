#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    int t, n; 
    ll num;
    cin >> t;
    while (t--) {
        ll max = -1;
        ll min = 1e9 + 10;
        cin >> n;
        for (int i = 0; i < n; ++i) {
            cin >> num;
            if (num > max) 
                max = num;
            if (num < min)
                min = num;
        }
        cout << max - min << endl;
    }

}
