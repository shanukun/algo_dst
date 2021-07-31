#include <bits/stdc++.h>

using namespace std;
#define ll long long int
#define readin freopen("input.txt", "r", stdin)
#define MOD 1e9+7

string find_top(map<string, int> mp)
{
    string key;
    ll max = 0;
    for (auto &x: mp) {
        if (x.second > max) {
            key = x.first;
            max = x.second;
        }
    }
    return key;
}

int main()
{
    readin;

    map<string, int> chc, coc;
    map<string, string> chco;

    string chn, con;
    ll no_ch, votes;

    cin >> no_ch;
    cin >> votes;

    for (ll i = 0; i < no_ch; i++) {
        cin >> chn;
        cin >> con;

        chc[chn] = 0;
        coc[con] = 0;
        chco[chn] = con;
    }

    for (ll i = 0; i < votes; i++) {
        cin >> chn;

        chc.at(chn) += 1;
        coc.at(chco.at(chn)) += 1;
    }

    cout << find_top(coc) << "\n";
    cout << find_top(chc) << "\n";
}
