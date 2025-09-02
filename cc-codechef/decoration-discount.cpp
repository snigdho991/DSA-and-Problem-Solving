#include <iostream>
using namespace std;

int main () {
    int t;
    cin >> t;
    
    while (t--)
    {
        int n;
        cin >> n;

        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        int minVases = a[0] + a[1]/2;
        for (int i = 0; i < n - 1; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (i == j) {
                    continue;
                }

                if (a[i+1]/2 > a[j]) {
                    if (a[i] + a[j] < minVases) {
                        minVases = a[i] + a[j];
                    }
                } else {
                    if (a[i] + a[i+1]/2 < minVases) {
                        minVases = a[i] + a[i+1]/2;
                    }
                }
            }

            
        }
        
        cout << minVases << endl;
    }
    
    return 0;
}