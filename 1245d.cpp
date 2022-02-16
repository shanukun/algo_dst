#include <bits/stdc++.h>
using namespace std;
const int N = 2010;
const long long inf = 1e9 + 10;
#define ll long long
#define debug(x) cerr << #x << " " << x << endl;

int parent[N];
int sizes[N];

void make(int v) {
    parent[v] = v;
    sizes[v] = 1;
}

int find(int v) {
    if (v == parent[v]) return v;
    return parent[v] = find(parent[v]);
}

void union_set(int a, int b) {
    a = find(a);
    b = find(b);

    if (a != b) {
        if (sizes[a] < sizes[b])
            swap(a, b);
        parent[b] = a;
        sizes[a] += sizes[b];
    }
}

int main() {
    int n, x, y;
    cin >> n;

    vector<pair<int, int>> v(n + 1);
    vector<ll> cost(n + 1);
    vector<ll> kcost(n + 1);

    for (int i = 1; i <= n; i++) {
        cin >> x >> y;
        v[i] = {x, y};
    }

    for (int i = 1; i <= n; i++)
        cin >> cost[i];
    for (int i = 1; i <= n; i++)
        cin >> kcost[i];

    for (int i = 0; i <= n; i++) 
        make(i);

    vector<pair<ll, pair<int, int>>> g;
    for (int i = 1; i <= n; i++)
        g.push_back({cost[i], {0, i}});

    for (int i = 1; i <= n; i++) {
        for (int j = i + 1; j <= n; j++) {
            int x = abs(v[i].first - v[j].first);
            int y = abs(v[i].second - v[j].second);
            ll wt = (kcost[i] + kcost[j]) * (x + y);
            g.push_back({wt, {i, j}});
        }
    }

    sort(g.begin(), g.end());

    ll tc = 0;
    vector<int> cws;
    vector<pair<int, int>> cwc;
    for (auto &edge: g) {
        ll wt = edge.first;
        int a = edge.second.first;
        int b = edge.second.second;
        if (find(a) == find(b)) continue;
        union_set(a, b);
        tc += wt;
        if (a == 0)
            cws.push_back(b);
        else
            cwc.push_back({a, b});
    }

    cout << tc << endl;
    cout << cws.size() << endl;
    for (int x: cws) 
        cout << x << " ";
    cout << endl;
    cout << cwc.size() << endl;
    for (pair<int, int> &x: cwc) 
        cout << x.first << " " << x.second << endl;

        
}
