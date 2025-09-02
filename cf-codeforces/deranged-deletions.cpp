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

        int a[n];
        int b[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            b[i] = a[i];
        }
        
        bool deranged = true;
        sort(a, a+n);

        for (int i = 0; i < n - 1; i++)
        {
            if (b[i] > b[i + 1]) {
                deranged = false;
                break;
            }
            
            else if (a[i] == b[i])
            {
                deranged = false;
                break;
            }
        }
        // cout << endl;
        if (deranged) {
            cout << "Yes" << endl;
            cout << n << endl;
            for (int i = 0; i < n; i++)
            {
                cout << b[i] << " ";
            }
            
            cout << endl;
        } else {
            cout << "No" << endl;
        }
    }
    
    return 0;
}