#include <bits/stdc++.h>
using namespace std;

long long int cntr = 0;

void merge(vector<int> &v, int low, int high, int mid) 
{
    vector<int> L;
    vector<int> R;

    int m = mid - low + 1;
    int n = high - mid;
    int i, j, k;

    for (i = low; i <= mid; i++)
        L.push_back(v[i]);
    for (i = mid + 1; i <= high; i++)
        R.push_back(v[i]);

    i = j = 0;
    k = low;
    while (i < m && j < n) {
        if (L[i] > R[j]) {
            v[k++] = R[j++];
            cntr += L.size() - i;
        } else {
            v[k++] = L[i++];
        }
    }
    while (i < m) 
        v[k++] = L[i++];
    while (j < n) 
        v[k++] = R[j++];
}

void m_sort(vector<int> &v, int low, int high) 
{
    int mid = low + (high - low) / 2;
    if (low < high) {
        m_sort(v, low, mid);
        m_sort(v, mid + 1, high);
        merge(v, low, high, mid);
    }
    else {
        return;
    }
}

int main()
{
    int n;
    cin >> n;

    int elem;
    vector<int> v;
    for (int i = 0; i < n; i++) {
        cin >> elem;
        v.push_back(elem);
    }
    m_sort(v, 0, v.size() - 1);
    cout << endl;
    cout << cntr;
}
