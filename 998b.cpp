#include <bits/stdc++.h>
using namespace std;



int main() {
    int n, b;
    cin >> n >> b;

    int nums[n + 1];
    int evod[n + 1];
    evod[0] = 0;
    for (int i = 1; i <= n; i++) {
        cin >> nums[i];
        if (nums[i] & 1) 
            evod[i] = evod[i - 1] + 1;
        else
            evod[i] = evod[i - 1] - 1;
    }
   

    vector<int> costs;
    for (int i = 2; i < n; i++)
        if (evod[i] == 0 && evod[n] == 0)
            costs.push_back(abs(nums[i] - nums[i + 1]));

    sort(costs.begin(), costs.end());
    int cnt = 0;
    for (int x: costs) {
        b = b - x;
        if (b >= 0)
            cnt++;
        else 
            break;
    }
    cout << cnt << endl;
}
