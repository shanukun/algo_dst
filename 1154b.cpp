#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, num, tot = 0;
    cin >> n;

    set<int> st;
    for (int i = 0; i < n; i++) {
        cin >> num;
        st.insert(num);
    }

    for (int x: st)
        tot += x;

    int sz = st.size();

    int frst = *(st.begin());
    int mid = *(++st.begin());
    int last = *(--st.end());
    if (sz > 3) {
        cout << -1;
    } else if (sz == 3) {
        if (mid - frst == last - mid)
            cout << mid - frst;
        else
            cout << -1;
    } else if (sz == 2) {
        if ((last + frst) % 2 == 0)
            cout << last - (last + frst) / 2;
        else
            cout << last - frst;
    } else {
        cout << 0;
    }
    cout << endl;

}
