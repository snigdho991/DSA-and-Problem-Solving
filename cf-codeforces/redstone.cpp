#include <iostream>
#include <vector>
#include <numeric>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) 
    {
        int n;
        cin >> n;

        vector<int> a(n);
        for (int i = 0; i < n; ++i) 
        {
            cin >> a[i];
        }

        bool is_ok = false;
        for (int i = 0; i < n; i++) 
        {
            for (int j = 0; j < n; j++) 
            {
                if (i != j && a[i] == a[j]) 
                {
                    is_ok = true;
                    break;
                }
            }
        }
        
        if (is_ok) 
        {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }
    
    return 0;
}

// https://codeforces.com/contest/2133/problem/A