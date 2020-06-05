#include<bits/stdc++.h>

#define ll long long int
#define rep(a, b, c) for(ll a = (ll)b; a < (ll)c; a++)
#define repe(a, b, c) for(ll a = (ll)b; a <= (ll)c; a++)
#define repk(a, b, c, k) for(ll a = (ll)b; a < (ll)c; a += (ll)k)
using namespace std;
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define readin freopen("input.txt", "r", stdin)
#define tc ll T; cin >> T; while(T--)

ll getDg(char c) {
    switch(c) {
        case '2': return 2;
        case '3': return 3;
        case '4': return 4;
        case '5': return 5;
        case '6': return 6;
        case '7': return 7;
        case '8': return 8;
        case '9': return 9;
    }
    return 0;
}

ll getWt(char c) {
    switch(c) {
        case 'H': return 1;
        case 'C': return 12;
        case 'O': return 16;
    }
    return 0;
}

pair<ll, ll> getSum(string f, ll i) {
    ll lsum = 0;
    ll sum = 0;
    pair<ll, ll> p;

    while(f[i] != ')') {

        if (f[i] == '(') {
            p = getSum(f, i + 1);
            i = p.first;
            lsum = p.second;
        }            
        else if (isdigit(f[i])) {
            ll dg = getDg(f[i]);

            if (f[i - 1] == ')')
                lsum = lsum * (dg - 1);
            else 
                lsum = getWt(f[i - 1]) * (dg - 1);
        }
        else {
            lsum = getWt(f[i]);
        }
        i++;
        sum += lsum;
    }

    p.first = i;
    p.second = sum;

    return p;
}

int main() {
    fastio;

    ll dg;
    ll i = 0;
    ll lsum = 0;
    ll sum = 0;

    stack<char> st;
    string f;
    pair<ll, ll> p;

    cin >> f;

    while(i < f.size()) {

        if (f[i] == '(') {
            p = getSum(f, i + 1);
            i = p.first;
            lsum = p.second;
        }
        else if (isdigit(f[i])) {
            ll dg = getDg(f[i]);

            if (f[i - 1] == ')')
                lsum = lsum * (dg - 1);
            else 
                lsum = getWt(f[i - 1]) * (dg - 1);
        }
        else {
            lsum = getWt(f[i]);
        }

        i++;
        sum += lsum;
    }

    cout << sum << endl;

    return 0;
}
