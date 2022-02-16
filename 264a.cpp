#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    string s;
    cin >> s;
    vector<int> v;
    vector<int> st;
    
    int stone = 1;
    for (int i = 0; i < int(s.size()); i++) {
        if (s[i] == 'l')
            st.push_back(stone++);
        else
            v.push_back(stone++);
    }

    for (int x: v)
        cout << x << "\n";
    for (int i = st.size() - 1; i >= 0; i--)
        cout << st[i] << "\n";
}
