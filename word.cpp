#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int u = 0, l = 0;
    for (int i = 0; i < int(s.size()); i++) {
        for (int j = 0; j < int(s.size()); j++) {
            if (s[i] & (1 << 5))
                l++;
            else
                u++;
        }
    }
    for (int i = 0; i < int(s.size()); i++) {
        if (u > l)
            s[i] = char(s[i] & '_');
        else
            s[i] = char(s[i] | ' ');
    }
    cout << s << endl;
}
