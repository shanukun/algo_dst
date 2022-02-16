#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int total = 0, es = 0, os = 0;
    vector<int> v(n + 1);
    for (int i = 1; i <= n; i++) {
        cin >> v[i];
        if (i & 1)
            os += v[i];
        else 
            es += v[i];
    }
    total = os + es;

    int cnt = 0;
    for (int i = 1; i <= n; i++) {
        if (i & 1) 
            os = total - es - v[i];
        else
            es = total - os - v[i];
        if (es == os)
            cnt++;
    }
    cout << cnt << endl;

}
