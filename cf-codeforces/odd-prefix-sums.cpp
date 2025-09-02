#include <iostream>
using namespace std;

int main () {
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        int a[n + 1];
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];

            if (a[i] % 2 != 0) {
                swap(a[1], a[i]);
            }

        }

        int sum = 0;
        bool isRearr = 1;
        for (int i = 1; i <= n; i++)
        {
            if ((a[i] + sum) % 2 == 0)
            {
                isRearr = 0;
                break;
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