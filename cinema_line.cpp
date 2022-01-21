#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, num;
  cin >> n;
  int tf = 0, ff = 0;
  bool fl = true;
  while (n--) {
    cin >> num;
    if (num == 25) {
      tf++;
    } else if (num == 50) {
      if (tf > 0) {
        tf--;
        ff++;
      } else {
        fl = false;
      }
    } else {
      if (tf > 0 && ff > 0) {
        tf--;
        ff--;
      } else if (tf > 2) {
        tf -= 3;
      } else {
        fl = false;
      }
    }
  }
  cout << (fl ? "YES" : "NO") << endl;
}
