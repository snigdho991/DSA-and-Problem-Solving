#include <iostream>
using namespace std;

int main () {
    int n, x, y;
    cin >> n >> x >> y;

    int a = y / x;
    int r = n / a;
    int z = n % a;

    if (z == 0) {
        cout << r;
    } else {
        cout << r + 1;
    }

    return 0;
}


// int main () {
//     int n, x, y;
//     cin >> n >> x >> y;

//     int ck_per_vhcl = y / x;

//     int need = n / ck_per_vhcl;

//     if (n % ck_per_vhcl != 0) {
//         need++;
//     }

//     cout << need;

//     return 0;
// }