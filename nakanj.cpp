#include <bits/stdc++.h>
using namespace std;

void qp(vector<bool> &vis, vector<int> &vec, queue<pair<int, int>> &q, int i, int j, int lev) 
{
    if (i >= 0 && j >= 0 && i < 8 && j < 8 && !vis[i * 8 + j]) {
        q.push({i, j});
        vec[i * 8 + j] = lev + 1;
        vis[i * 8 + j] = true;
    }
}


void bfs(pair<int, int> p, vector<int> &vec) 
{
    int i, j, lev;
    queue<pair<int, int>> q;
    vector<bool> vis(64, false);
    vis[p.first * 8 + p.second] = true;

    q.push(p);

    while (!q.empty()) {
        pair<int, int> v = q.front();
        q.pop();
        lev = vec[v.first * 8 + v.second];

        i = v.first + 2;
        j = v.second - 1;
        qp(vis, vec, q, i, j, lev);

        i = v.first + 2;
        j = v.second + 1;
        qp(vis, vec, q, i, j, lev);

        i = v.first - 2;
        j = v.second - 1;
        qp(vis, vec, q, i, j, lev);

        i = v.first - 2;
        j = v.second + 1;
        qp(vis, vec, q, i, j, lev);

        i = v.first + 1;
        j = v.second - 2;
        qp(vis, vec, q, i, j, lev);

        i = v.first + 1;
        j = v.second + 2;
        qp(vis, vec, q, i, j, lev);

        i = v.first - 1;
        j = v.second - 2;
        qp(vis, vec, q, i, j, lev);

        i = v.first - 1;
        j = v.second + 2;
        qp(vis, vec, q, i, j, lev);
    }
}

int main() 
{
    int t;
    string src, snk;

    vector<int> vec[64];

    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            vector<int> v(64, 0);
            v[i * 8 + j] = 0;
            bfs({i, j}, v);
            vec[i * 8 + j] = v;
        }
    }

    cin >> t;
    while (t--) {
        cin >> src >> snk;
        int s1, s2, g1, g2;
        s1 = src[0] - 'a';
        s2 = src[1] - '1';
        g1 = snk[0] - 'a';
        g2 = snk[1] - '1';
        cout << vec[s1 * 8 + s2][g1 * 8 + g2] << endl;
    }
}
