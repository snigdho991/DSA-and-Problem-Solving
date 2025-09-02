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
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        sort(a, a + n);

        int sum = 0;
        bool isRearr = 1;
        for (int i = 0; i < n; i++)
        {
            if ((a[i] + sum) % 2 == 0)
            {
                isRearr = 0;
            } else {
                isRearr = 1;
            }
            sum += a[i];
        }

        if (isRearr)
        {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }

    return 0;
    
}