#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, m, l, r;
        cin >> n >> m >> l >> r;

        int l_prime = l, r_prime = r;
        bool toggle = true;

        for (int i = n; i >= m; i--) {
            if (l < 0) {
                if (toggle) {
                    l_prime = l;
                    r_prime = r;
                    r--; // তারপর রেডুস করো
                } else {
                    l_prime = l;
                    r_prime = r;
                    l++;
                }
                toggle = !toggle;
            } else {
                l_prime = l;
                r_prime = r;
                r--;
            }
        }

        cout << l_prime << " " << r_prime << endl;
    }

    return 0;
}
