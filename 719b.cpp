#include <bits/stdc++.h>
using namespace std;
#define int long long
#define debug(x) cerr << #x << " : " << x << endl
#define ff first
#define ss second

int32_t main() {
   int n; 
   cin >> n;
   string s;
   cin >> s;

   int b = 0, r = 0;
   for (int i = 0; i < n; i++) {
       if (i % 2 == 0) {
           if (s[i] != 'r')
               r++;
       } else {
           if (s[i] != 'b')
               b++;
       }
   }
   int ans = max(r, b);
   r = b = 0;
   for (int i = 0; i < n; i++) {
       if (i % 2 != 0) {
           if (s[i] != 'r')
               r++;
       } else {
           if (s[i] != 'b')
               b++;
       }
   }
   ans = min(ans, max(r, b));
   cout << ans << endl;
}
