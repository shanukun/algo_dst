#include <bits/stdc++.h>
using namespace std;

long long ch(int a, int b, int c, int d) {
    unordered_set<long long> s;
    for (int i = 0; i <= 1000; i++)
        s.insert(a * i + b);
    for (int i = 0; i <= 1000; i++) {
        long long v = c * i + d;
        if (s.find(c * i + d) != s.end())
            return v;
    }
    return -1;
}

int main() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    cout << ch(a, b, c, d) << endl;
}

