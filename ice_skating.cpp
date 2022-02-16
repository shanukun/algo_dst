#include <bits/stdc++.h>
using namespace std;
const int N = 1e7 + 10;

int parent[N];
int sizes[N];

void make(int v) {
    parent[v] = v;
}

int find(int v) {
    if (parent[v] == v) return v;
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

    vector<pair<int, int>> v;
    for (int i = 0; i < n; i++) {
        cin >> x >> y;
        v.push_back({x, y});
    }

    for (int i = 0; i < n; i++)
        make(v[i].first * 1000 + v[i].second);

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (v[i].first == v[j].first || v[i].second == v[j].second) {
                union_set(v[i].first * 1000 + v[i].second, 
                        v[j].first * 1000 + v[j].second);
            }
        }
    }
    long long cnt = 0;
    for (int i = 1000; i < N; i++)
        if (parent[i] == i)
            cnt++;
    cout << cnt - 1;
}
