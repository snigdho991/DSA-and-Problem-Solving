#include <iostream>
using namespace std;

int main () {
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        int a[n], b[n];

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }

        int inc, dec = 0;
        int cnt = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] > b[i])
            {
                dec++;
            } else {
                inc++;
            }
        }
        
        cout << cnt << endl; 
    }

    return 0;
    
}