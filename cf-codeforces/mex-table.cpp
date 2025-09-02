#include <iostream>
#include <algorithm>
using namespace std;

int main () {
    int t;
    cin >> t;

    while (t--)
    {
        int n, m;
        cin >> n >> m;

        int mx = max(n,m);
        cout << mx + 1 << endl;
    }
    
    return 0;
}

// https://codeforces.com/contest/2057/problem/A