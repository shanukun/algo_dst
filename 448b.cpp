#include <bits/stdc++.h>
using namespace std;
#define int long long
#define debug(x) cerr << #x << " : " << x << endl
#define ff first
#define ss second

bool sm(string s, string t) {
    int j = 0;
    for (int i = 0; i < (int) s.size(); i++) {
        if (s[i] == t[j]) {
            j++;
        }
    }
    return j == (int) t.size();
}

int32_t main() {
   string s, t;
   cin >> s;
   cin >> t;

   int sc[26] = {0};
   int tc[26] = {0};
   for (int i = 0; i < (int) s.size(); i++)
       sc[s[i] - 'a']++;
   for (int i = 0; i < (int) t.size(); i++)
       tc[t[i] - 'a']++;
   bool ar = sm(s, t);
   bool tr = false;
   for (int i = 0; i < 26; i++) {
       if (sc[i] < tc[i])
           tr = true;
   }
   if (tr) {
       cout << "need tree";
   } else {
       if (ar) {
           cout << "automaton";
       } else {
           if (s.size() == t.size())
               cout << "array";
           else
               cout << "both";
       }
   }
   cout << endl;
}
