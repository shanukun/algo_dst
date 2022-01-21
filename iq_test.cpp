#include <bits/stdc++.h>
using namespace std;
int main() {
  vector<string> b(4);
  for (int i = 0; i < 4; i++)
    cin >> b[i];
  bool fl = false;
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      int bcnt = 0;
      int wcnt = 0;
      if (b[i][j] == '#')
        ++bcnt;
      if (b[i + 1][j] == '#')
        ++bcnt;
      if (b[i][j + 1] == '#')
        ++bcnt;
      if (b[i + 1][j + 1] == '#')
        ++bcnt;
      if (b[i][j] == '.')
        ++wcnt;
      if (b[i + 1][j] == '.')
        ++wcnt;
      if (b[i][j + 1] == '.')
        ++wcnt;
      if (b[i + 1][j + 1] == '.')
        ++wcnt;
      if (bcnt >= 3 || wcnt >= 3) {
        fl = true;
        break;
      }
    }
    if (fl)
      break;
  }
  cout << (fl ? "YES" : "NO") << endl;
}
