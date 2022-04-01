#include <bits/stdc++.h>
using namespace std;
#define debug(x) cerr << #x << " " << x << endl
#define int long long
#define ff first
#define ss second

int parent[101];
int sizes[101];

void make_set(int v) {
    parent[v] = v;
    sizes[v] = 1;
}

int find_set(int v) {
    if (v == parent[v])
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
    int n, m, k;
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
        make_set(i);

    int lcnt = 0;
    vector<int> gr[n + 1];
    for (int i = 1; i <= n; i++) {
        cin >> k;
        int num;
        for (int j = 0; j < k; j++) {
            cin >> num;
            gr[i].push_back(num);
            lcnt++;
        }
    }
    for (int i = 1; i <= n; i++) {
        for (int j = i + 1; j <= n; j++) {
            for (int k = 0; k < (int) gr[i].size(); k++) {
                if (find_set(i) == find_set(j))
                    break;
                for (int l = 0; l < (int) gr[j].size(); l++) {
                    if (gr[i][k] == gr[j][l]) {
                        union_set(i , j);
                        break;
                    }
                }
            }
        }
    }
    unordered_set<int> st;
    for (int i = 1; i <= n; i++) 
        st.insert(parent[i]);
    int ans = st.size() - 1;
    if (lcnt == 0)
        cout << n << endl;
    else 
        cout << ans << endl;
}
