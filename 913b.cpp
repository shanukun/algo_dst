#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, num;
    cin >> n;

    int cnt[n + 1] = {0};
    int parent[n + 1];
    memset(parent, -1, sizeof(parent));
    unordered_set<int> v;

    for (int i = 2; i <= n; i++) {
        cin >> num;
        v.insert(num);
        if (parent[num] != -1) {
            cnt[parent[num]]--;
            parent[num] = -1;
        }
        parent[i] = num;
        cnt[num]++;
    }

    bool fl = true;
    for (int x: v) {
        if (cnt[x] < 3) {
            fl = false;
            break;
        }
    }
    cout << (fl ? "Yes" : "No") << endl;
}
