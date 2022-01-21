#include <bits/stdc++.h>
using namespace std;
int main() {
  string s;
  cin >> s;
  int i;
  for (i = 0; i < int(s.size()); i++)
    if (s[i] == '0')
      break;
  if (i == int(s.size()))
    i--;
  for (int j = 0; j < int(s.size()); j++)
    if (j != i)
      cout << s[j];
  cout << "\n";
}
