#include <bits/stdc++.h>
using namespace std;
int main() 
{
    string dna;
    cin >> dna;
    int count = 1;
    int best = 1;
    for (unsigned int i = 1; i < dna.size(); i++) {
        if (dna[i] == dna[i - 1])
            ++count;
        else
            count = 1;
        best = max(best, count);
    }
    cout << best;
}
