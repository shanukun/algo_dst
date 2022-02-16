#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 10;

int parent[N];

void make(int v) {
    parent[v] = v;
}

int find(int v) {
    if (v == parent[v])
        return v;
    return parent[v] = find(parent[v]);
}

void union_set(int a, int b) {
    a = find(a);
    b = find(b);
    parent[b] = a;
}

int main () {
    int n, k, i, j;
    cin >> n;
    cin >> k;

    for (int i = 1; i <= n; i++)
        make(i);

    while (k--) {
        cin >> i >> j;
        union_set(i, j);
    }

    int cnt = 0;
    for (int i = 1; i <= n; i++) {
        if (parent[i] == i) 
            cnt++;
    }
    cout << cnt << endl;
}
