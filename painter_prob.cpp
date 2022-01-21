#include <bits/stdc++.h>

using namespace std;


bool check_comp(vector<int> &v, long long int h, int A) {
    int t = 0;
    for (int i = 0; i < v.size(); ++i) {
        t += v[i];
        if (t > h) {
            t = v[i];
            A--;
        }
    }
    return A >= 0;
}

int main() {
    int A = 3, B = 10;
    vector<int> C{9, 640, 435, 647, 352, 8, 90, 960, 329, 859};

    int mod = 10000003;
    int gt = -1;
    long long int sum = 0;
    for (int i = 0; i < C.size(); ++i) {
        gt = max(gt, C[i]);
        sum += C[i];
    }
    if (A >= C.size()) {
        cout << (gt * B) % mod;
    } else if (A == 1) {
        cout << (sum * B) % mod;
    } else {
        long long int lo = gt, hi = sum, mid;
        while (hi - lo > 1) {
            mid = lo + (hi - lo) / 2;
            if (check_comp(C, mid, A)) {
                hi = mid;
            } else {
                lo = mid + 1;
            }
        }
        if (check_comp(C, lo, A))
            cout << (lo * B) % mod;
        else
            cout << (hi * B) % mod;
    }
}

