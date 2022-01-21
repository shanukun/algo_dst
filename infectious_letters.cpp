#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;

    int count = 0;
    stack<char> st;

    for (int i = 0; i < n; ++i) {
        while (!st.empty() && st.top() != 'b' && s[i] == 'a') {
            if (st.top() == 'a')
                break;
            count++;
            st.pop();
        }
        if (!st.empty()) {
            if (st.top() == 'a' && s[i] != 'b') {
                count++;
            } else {
                if (s[i] == 'a')
                    count++;
                st.push(s[i]);
            }

        } else {
            if (s[i] == 'a')
                count++;
            st.push(s[i]);
        }
    }
    cout << count << endl;
}
