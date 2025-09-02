#include <iostream>
using namespace std;

int main () {
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        string a;
        cin >> a;

        int m;
        cin >> m;

        string b, c;
        cin >> b >> c;


        for (int i = 0; i < m; i++)
        {
            char ch = c[i];

            if (ch == 'D') {
                a.insert(a.end(), b[i]);
            } else if (ch == 'V') {
                a.insert(a.begin(), b[i]);
            }
        }

        cout << a << endl;
        
    }
    
    return 0;
}