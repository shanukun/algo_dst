#include <bits/stdc++.h>

using namespace std;

bool can_eat(vector<int> &v, int bph, int h) 
{
    int h_cnt = 0;
    for (auto x: v)
        h_cnt +=  x / bph + (x % bph != 0);
    return h_cnt <= h;
}

int main() 
{
    int t;
    int n, h;

    cin >> t;
    while (t--) {
        int gt = -1;
        cin >> n >> h;

        vector<int> v(n);
        for (int i = 0; i < n; ++i) {
            cin >> v[i];
            gt = max(v[i], gt);
        }

        int lo = 0, hi = gt, mid;
        while (hi - lo > 1) {
            mid = lo + (hi - lo) / 2;
            if (can_eat(v, mid, h)) 
                hi = mid;
            else 
                lo = mid + 1;
        }
        if (can_eat(v, lo, h)) 
            cout << lo << endl;
        else 
            cout << hi << endl;
    }
}
