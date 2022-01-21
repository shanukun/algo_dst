#include <bits/stdc++.h>
using namespace std;

int main()
{
    int c;
    cin >> c;
    long long prod = 1;
    int clen = (int) log2(c) + 1;
    for (int i = 1; i < c; i++) {
        long long j = i ^ c;
        int jlen = (int) log2(j) + 1;
        int ilen = (int) log2(i) + 1;

        if (jlen <= clen && ilen <= clen)
            if (i * j > prod) 
                prod = i * j;
    }
    cout << prod << endl;
}
