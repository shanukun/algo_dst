#include <bits/stdc++.h>
using namespace std;
int main()
{
    int num;
    unordered_set<int> s;
    int l[10] = {0};
    for (int i = 0; i < 6; i++) {
        cin >> num;
        s.insert(num);
        l[num]++;
    }

    if (s.size() > 3) {
        cout << "Alien";
    } else if (s.size() == 3) {
        for (auto x: s) {
            if (l[x] == 2 || l[x] == 3) {
                cout << "Alien";
                break;
            } else if (l[x] == 4) {
                cout << "Bear";
                break;
            }
        }
    } else if (s.size() == 2) {
        for (auto x: s) {
            if (l[x] == 3) {
                cout << "Alien";
                break;
            } else if (l[x] == 5) {
                cout << "Bear";
                break;
            } else if (l[x] == 4) {
                cout << "Elephant";
                break;
            }
        }
    } else if (s.size() < 2) {
        cout << "Elephant";
    }
    cout << "\n";
}
