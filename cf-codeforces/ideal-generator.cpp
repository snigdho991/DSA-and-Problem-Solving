#include <iostream>
using namespace std;

int main () {
    int t;
    cin >> t;

    while (t--)
    {
        int k;
        cin >> k;

        if (k == 1 || k % 2 == 1)
        {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }

    return 0;
}

// https://codeforces.com/contest/2093/problem/A