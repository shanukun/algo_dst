#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int num;
    int sum = 0;
    for (int i = 0; i < 5; i++) {
        cin >> num;
        sum += num;
    }
    if (sum != 0 && sum % 5 == 0) 
        cout << sum / 5;
    else
        cout << -1;
}
