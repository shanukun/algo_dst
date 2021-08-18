#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    if (n == 2 || n == 3)
        cout << "NO SOLUTION";
    else {
        for (int j = 2; j <= n; j += 2)
            cout << j << " ";
        for (int i = 1; i <= n; i += 2)
            cout << i << " ";
    }
}
