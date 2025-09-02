#include <iostream>
using namespace std;

int main () {
    int t;
    cin >> t;

    while (t--) 
    {
        int n, m, l, r;
        cin >> n >> m >> l >> r;

        // int l_prime, r_prime;
        // bool l_visit = 1, r_visit = 1;
        // for (int i = n; i >= m; i--)
        // {
        //     if (l < 0) {
        //         if (l_visit) {
        //             l_prime = l;
        //             r_prime = r;
        //             r--;
        //         } else {
        //             l_prime = l_prime;
        //             r_prime = r_prime;
        //             l++;
        //         }
        //         l_visit = !l_visit;
        //         r_visit = !r_visit;
        //     } else if (l >= 0) {
        //         l_prime = l;
        //         r_prime = r--;
        //     }
        // }
        // cout << l_prime << " " << r_prime << endl;

        if (r > m) {
            cout << 0 << " " << m << endl;
        } else {
            cout << r - m << " " << r << endl;
        }

    }

    return 0;
}
