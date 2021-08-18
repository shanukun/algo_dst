#include <bits/stdc++.h>
using namespace std;

int b_search(long long int elem, vector<long long int> &v)
{
    int mid;
    int low = 0;
    int high = v.size() - 1;
    long long int ans = -1;
    while (low <= high) {
        mid = low + (high - low) / 2;
        if (v[mid] > elem) {
            ans = mid;
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }
    if (ans != -1) {
        v[ans] = elem;
        return 1;
    }
    return 0;
}

int main()
{
    int t, n;
    cin >> t;
    while (t--) {
        cin >> n;
        vector<long long int> v;
        long long int elem;
        for (int i = 0; i < n; i++) {
            cin >> elem;
            if (!b_search(elem, v))
                v.push_back(elem);
        }
        cout << v.size() << " ";
        for (int i = 0; i < v.size(); i++) 
            cout << v[i] << " ";
        cout << "\n";
    }
}
