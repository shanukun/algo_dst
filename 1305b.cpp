#include <bits/stdc++.h>
using namespace std;
#define debug(x) cerr << #x << " " << x << endl

int main() {
    string str;
    cin >> str;

    int i = 0, j = str.size() - 1;
    vector<int> v;
    while (i < j) {
        if (str[i] != '(') {
            i++;
            continue;
        }
        if (str[j] != ')') {
            j--;
            continue;
        }
        v.push_back(i++);
        v.push_back(j--);
    }
    if (v.size() > 0) {
        cout << 1 << endl << v.size() << endl;;
        sort(v.begin(), v.end());
        for (int x : v)
            cout << x + 1 << " ";
        cout << endl;
    } else {
        cout << 0 << endl;
    }
}
