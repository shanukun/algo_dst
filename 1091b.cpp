#include <bits/stdc++.h>
using namespace std;
const long long N = 1e6;
#define ff first
#define ss second

int main() {
    int n;
    cin >> n;

    map<pair<int, int>, int> m;
    vector<pair<int, int>> obs(n);
    vector<pair<int, int>> clue(n);
    for (int i = 0; i < n; i++)
        cin >> obs[i].ff >> obs[i].ss;
    for (int i = 0; i < n; i++)
        cin >> clue[i].ff >> clue[i].ss;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            int x = obs[i].ff + clue[j].ff;
            int y = obs[i].ss + clue[j].ss;
            if (m.find({x, y}) == m.end())
                m[{x, y}] = 1;
            else 
                m[{x, y}]++;
        }
    }

    for (auto x: m) {
        if (m[{x.ff.ff, x.ff.ss}] == n) {
            cout << x.ff.ff << " " << x.ff.ss << endl;
            break;
        }
    }
}
