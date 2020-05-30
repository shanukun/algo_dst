// https://www.codechef.com/problems/LECANDY
#include <iostream>
#include<bits/stdc++.h>

#define pb push_back
#define rep(a,b,c) for(int a=(int)b;a<(int)c;a++)
#define repe(a,b,c) for(int a=(int)b;a<=(int)c;a++)
#define repk(a,b,c,k) for(int a=(int)b;a<(int)c;a+=(int)k)
#define fastio std::ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define mod 1000000007
#define modu 998244353
#define int long long int
#define pii pair<int,int>
#define piii pair<int,pair<int,int>>
#define ful(a) a.begin(),a.end()
#define ub upper_bound
#define lb lower_bound
#define ff first
#define ss second
using namespace std;
#define MAXN 100009
#define MAXW 230

int main() {
    fastio
    int i, candyNo;
    int testCase, totalEleph, totalCandy;

    cin >> testCase;

    while(testCase--) {
        cin >> totalEleph;
        cin >> totalCandy;

        int candyReq = 0;
        for(i = 0; i < totalEleph; i++) {
            cin >> candyNo;
            candyReq += candyNo;
        }
        if (candyReq <= totalCandy)
            cout << "Yes" << endl;
        else 
            cout << "No" << endl;
    }
}
