#include<bits/stdc++.h>

#define ll long long int
using namespace std;

ll gcd(ll a, ll b) {
    if (a == 0) {
        return b;
    }
    else {
        return gcd(b % a, a);
    }
}

