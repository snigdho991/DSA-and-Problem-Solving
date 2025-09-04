#include <iostream>
#include <vector>
using namespace std;

int main () {
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<int> v(n);
        for (int &x: v)
        {
            cin >> x;
        }

        bool is_psbl = false;

        for (int i = 0; i < n - 1; i++)
        {
            if (v[i] > v[i + 1])
            {
                cout << i + 1 << " " << i + 2 << endl;
                is_psbl = true;
                break;
            }
        }

        if (!is_psbl)
        {
            cout << "-1" << endl;
        }
        
    }

    return 0;
    
}

// https://www.codechef.com/START202D/problems/NOREAD