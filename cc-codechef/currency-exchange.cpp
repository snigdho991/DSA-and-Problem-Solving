#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int a1, b1, a2, b2;
        cin >> a1 >> b1 >> a2 >> b2;
        
        int initialRes = 5 * a1 + b1;
        int targetRes = 5 * a2 + b2;

        bool isPsbl = false;

        if (initialRes >= targetRes) {
            int diff = initialRes - targetRes;
            if (diff % 6 == 0) {
                isPsbl = true;
            }
        }
        
        if (isPsbl) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}