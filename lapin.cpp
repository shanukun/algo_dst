#include<bits/stdc++.h>

#define ll long long int
#define rep(a, b, c) for(ll a = (ll)b; a < (ll)c; a++)
#define repe(a, b, c) for(ll a = (ll)b; a <= (ll)c; a++)
#define repk(a, b, c, k) for(ll a = (ll)b; a < (ll)c; a += (ll)k)
using namespace std;
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define readin freopen("input.txt", "r", stdin)
#define tc ll T; cin >> T; while(T--)

int main() {
    fastio;

    int flag;
    string s;

    tc {
        flag = 1;
        ll arr1[26] = {0};
        ll arr2[26] = {0};

        cin >> s;

        ll len = s.length();
        ll mid = len / 2;

        rep(i, 0, mid)
            arr1[s[i] - 'a']++;

        if (len % 2 != 0)
            mid = mid + 1;

        rep(j, mid, len)
            arr2[s[j] - 'a']++;

        rep(k, 0, 26){
            if (arr1[k] != arr2[k]) {
                flag = 0;
                break;
            }
        }

        if (flag == 1) cout << "YES\n";
        else cout << "NO\n";
    }

    return 0;
}
