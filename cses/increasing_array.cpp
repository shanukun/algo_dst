#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    long long int num;
    long long int prev = 0;
    long long int move = 0;

    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> num;
        if (prev > num) {
            move += prev - num;
        }
        else {
            prev = num;
        }
    }
    cout << move;
}
