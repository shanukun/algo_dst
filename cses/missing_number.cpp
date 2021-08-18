#include <bits/stdc++.h>

using namespace std;

#define ll long long int

const int maxn = 2 * 10e5 + 1;
int ar[maxn];

int main()
{
    int n;
    int num;

    cin >> n;
    for (int i = 1; i < n; i++) {
        cin >> num;
        ar[num]++;
    }
    int j;
    for (j = 1; j <= n; j++) {
        if (ar[j] == 0)
            break;
    }
    cout << j;
}
