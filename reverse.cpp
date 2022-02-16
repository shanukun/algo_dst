#include <bits/stdc++.h>
using namespace std;
const int N = 1e9 + 10;
const int M = 1e5 + 10;

vector<int> cnt(M, N);
int main() 
{
    int n, m, x, y;
    cin >> n >> m;

    vector<pair<int, int>> gr[n + 1];
    for (int i = 0; i < m; i++) {
        cin >> x >> y;
        if (x == y) continue;
        gr[x].push_back({y, 0});
        gr[y].push_back({x, 1});
    }

    deque<int> qu;
    qu.push_back(1);
    cnt[1] = 0;

    while (!qu.empty()) {
        int f = qu.front();
        qu.pop_front();
        for (auto x: gr[f]) {
            int cv = x.first;
            int wt = x.second;
            if (cnt[f] + wt < cnt[cv]) {
                cnt[cv] = cnt[f] + wt; 
                if (wt == 1)
                    qu.push_back(cv);
                else
                    qu.push_front(cv);
            }
        }
    }
    cout << (cnt[n] == N ? -1 : cnt[n]) << endl;
}
