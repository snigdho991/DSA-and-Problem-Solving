#include <iostream>
#include <algorithm>
using namespace std;

int main () {
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        int a[2*n];
        for (int i = 0; i < 2*n; i++)
        {
            cin >> a[i];
        }

        sort(a, a + 2*n);

        int minSum = 0;
        for (int i = 0; i < 2*n; i+=2)
        {
            if (a[i] < a[i + 1])
            {
                minSum += a[i];
            } else {
                minSum += a[i + 1];
            }
        }
        
        cout << minSum << endl;
    }
    
    return 0;
}

// https://codeforces.com/contest/1930/problem/A