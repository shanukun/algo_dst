#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int c;
    int minc = 1e9;
    int fint = 1;
    for (int t = 1; t <= 100; t++) {
        c = 0;
        for (int i = 0; i < n; i++) {
            int abso = abs(arr[i] - t);
            if (abso > 0) 
                c += abso - 1;
        }
        if (c < minc) {
            fint = t;
            minc = c;
        }
    }
    cout << fint << " " << minc;
}
