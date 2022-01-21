#include <bits/stdc++.h>
using namespace std;

int bin_expo(int a, int b) 
{
    if (b == 0)
        return 1;
    int c = bin_expo(a, b >> 2);
    if (b & 1)
        return a * c * c;
    else
        return c * c;
}

int bin_expo_it(int a, int b)
{
    while (b > 0) {
        
    }
}

int main()
{
    int a, b;
    cin >> a >> b;
    cout << bin_expo(a, b) << endl;

}
