#include <bits/stdc++.h>
using namespace std;
#define debug(x) cerr << #x << " " << x << endl;

void b_search(vector<pair<int, int>> &v, int lower, int fixed, int dynamic, int which_x)
{
    string resp;
    pair<int, int> ans;
    int mid, low, high;
    low = lower;
    high = dynamic;

    while (low <= high) {
        mid = low + (high - low) / 2;
        if (!which_x)
            cout << "? " << fixed << " " << mid << endl;
        else
            cout << "? " << mid << " " << fixed << endl;
        fflush(stdout);
        cin >> resp;
        if (resp == "YES") {
            if (!which_x)
                ans = make_pair(fixed, mid);
            else
                ans = make_pair(mid, fixed);
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    v.push_back(ans);
}

int main()
{
    vector<pair<int, int>> v;

    b_search(v, 0, 0, 1000, 0);
    b_search(v, 0, 0, 1000, 1);

    int sq_l = v[1].first * 2;
    int trig_h = v[0].second - sq_l;

    b_search(v, sq_l / 2, sq_l, 1000, 1);

    int trig_b = 2 * v[2].first;
    long long int area = (trig_h * trig_b) / 2 + sq_l * sq_l;

    cout << "! " << area;
}
