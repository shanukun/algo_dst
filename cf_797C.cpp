#include<bits/stdc++.h>

#define ll long long int
#define rep(a, b, c) for(ll a = (ll)b; a < (ll)c; a++)
#define repe(a, b, c) for(ll a = (ll)b; a <= (ll)c; a++)
#define repk(a, b, c, k) for(ll a = (ll)b; a < (ll)c; a += (ll)k)
using namespace std;
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define readin freopen("input.txt", "r", stdin)
#define tc ll T; cin >> T; while(T--)

ll checkSmallest(ll alph[], char c) {
    rep(i, 0, c - 'a') {
        if (alph[i] > 0) {
            return 0;
        }
    } 
    return 1;
}

int main() {
    fastio;

    ll j = 0;
    ll alph[26] = {0};
    string s;
    stack<char> t;
    queue<char> u;

    cin >> s;
    rep(i, 0, s.size()) {
        alph[s[i] - 'a']++;
    }


    while(j < s.size()){
        if(!t.empty()) {
            ll smlst = checkSmallest(alph, t.top());

            if (smlst == 1) {
                u.push(t.top());
                t.pop();
            }
            else {
                t.push(s[j]);
                alph[s[j] - 'a']--;
                j++;
            }
            
        }
        else {
            t.push(s[j]);
            alph[s[j] - 'a']--;
            j++;
        }
    }

    while(!t.empty()) {
        u.push(t.top());
        t.pop();
    }

    while(!u.empty()) {
        cout << u.front();
        u.pop();
    }

    return 0;
}
