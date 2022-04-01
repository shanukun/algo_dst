#include <bits/stdc++.h>
using namespace std;
#define int long long
#define debug(x) cerr << #x << " : " << x << endl
#define ff first
#define ss second

const int N = 55;
int parent[N];
int sizes[N];

void make(int v) {
    parent[v] = v;
    sizes[v] = 1;
}

int find_set(int v) {
    if (parent[v] == v) 
        return v;
    return parent[v] = find_set(parent[v]);
}

void union_set(int a, int b) {
    a = find_set(a);
    b = find_set(b);
    if (a != b) {
        if (sizes[a] < sizes[b])
            swap(a, b);
        parent[b] = a;
        sizes[a] += sizes[b];
    }
}

int32_t main() {
    int n, m;
    cin >> n >> m;

    int ans = 1;
    for (int i = 1; i <= n; i++)
        make(i);

    for (int i = 0; i < m; i++) {
        int x, y;
        cin >> x >> y;
        union_set(x, y);
    }
    for (int i = 1; i <= n; i++) {
        if (parent[i] == i)
            ans *= (int) pow(2, sizes[i] - 1);
    }
    cout << ans << endl;
}
