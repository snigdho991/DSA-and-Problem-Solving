#include <iostream>
using namespace std;

int main () {
    int t;
    cin >> t;

    while (t--)
    {
        int n, c;
        cin >> n >> c;

        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        int cnt = 0, temp;

        for (int i = 0; i < n - 1; i++)
        {
            for (int j = 0; j < n - i - 1; j++)
            {
                if (a[j] < a[j+1])
                {
                    temp = a[j];
                    a[j] = a[j+1];
                    a[j+1] = temp;
                }
                
            }
            
        }
        
        int mult = 1;
        for (int i = 0; i < n; i++)
        {
            if (mult * a[i] > c) {
                cnt++;
            } else {
                mult *= 2;
            }
        }
       
        cout << cnt << endl;
        
    }

    return 0;
}

// https://codeforces.com/contest/2128/problem/A