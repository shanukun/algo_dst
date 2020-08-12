#include<bits/stdc++.h>

#define ll long long int
using namespace std;
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define tc ll T; cin >> T; while(T--)

int main() {
    fastio;

    ll p, cnt, sq, i;

    tc {
        cin >> p;

        cnt = 0;
        i = 11;
        while(i >= 0 && p != 0) {
            sq = (ll) pow(2, i);

            if (sq <= p) {
                p -= sq; 
                cnt++;
            }
            else i--;
        }

        cout << cnt << endl;
    }
    return 0;
}

