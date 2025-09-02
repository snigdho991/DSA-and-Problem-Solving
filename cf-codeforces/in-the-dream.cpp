#include <iostream>
using namespace std;

int main () {
    int t;
    cin >> t;

    while (t--)
    {
        int a, b, c, d;
        cin >> a >> b >> c >> d;

        if (a > b) 
        {
            swap(a, b);
        }

        if (c > d) 
        {
            swap(c, d);
        }

        c = abs(a - c);
        d = abs(b - d);

        if (2 * (a + 1) >= b && 2 * (c + 1) >= d)
        {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }

    }
    
    return 0;
}