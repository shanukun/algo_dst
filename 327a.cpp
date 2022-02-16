#include <bits/stdc++.h>
using namespace std;

#define ff first
#define ss second

int main() {
    int n, d;
    cin >> n;

    int co = 0;
    vector<int> v;
    for (int i = 0; i < n; i++) {
        cin >> d;
        if (d) {
            v.push_back(-1);
            co++;
        } else {
            v.push_back(1);
        }
    }

    int mx = -1;
    for (int i = 0; i < n; i++) {
        int sum = 0;
        for (int j = i; j < n; j++) {
            sum += v[j]; 
            mx = max(mx, sum);
        }
    }

    cout << co + mx << endl;
}

