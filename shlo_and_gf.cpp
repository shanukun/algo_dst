#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 10;
vector<bool> prim(N, true);

int main()
{
    prim[0] = prim[1] = false;
    for (int i = 2; i <= N; ++i) {
        if (prim[i]) {
            for (int j = 2 * i; j <= N; j += i)
                prim[j] = false;
        }
    }
    int n;
    cin >> n;
    if (n <= 2)
        cout << 1 << endl;
    else
        cout << 2 << endl;
    for (int i = 2; i <= n + 1; ++i) {
        if (prim[i])
            cout << 1 << " ";
        else 
            cout << 2 << " ";
    }
}
