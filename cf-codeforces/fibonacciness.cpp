#include <iostream>
using namespace std;

int main () {
    int t;
    cin >> t;
    
    while (t--)
    {
        int a1, a2, a4, a5;
        cin >> a1 >> a2 >> a4 >> a5;

        int a3 = a1 + a2;

        if (a3 + a4 != a5) {
            a3 = a4 - a2;
        }
        
        int cnt = 0;

        if (a1 + a2 == a3) {
            cnt++;
        }

        if (a2 + a3 == a4) {
            cnt++;
        }

        if (a3 + a4 == a5) {
            cnt++;
        }

        cout << cnt << endl;
    }

    return 0;   
}