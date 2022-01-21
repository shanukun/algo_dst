#include <bits/stdc++.h>
using namespace std;


int main() {
    int n;
    cin >> n;
    stack<int> st;
    vector<int> v(n);
    vector<int> ansv(n);

    for (int i = 0; i < n; ++i)
        cin >> v[i];
    for (int i = 0; i < n; ++i) {
        while (!st.empty() && v[st.top()] < v[i]) {
            ansv[st.top()] = v[i]; 
            st.pop();
        }
        st.push(i);
    }
    while (!st.empty()) {
        ansv[st.top()] = -1;
        st.pop();
    }
    for (int i = 0; i < n; ++i) {
        cout << v[i] << " " << ansv[i] << endl;
    }
    return 0;
}

