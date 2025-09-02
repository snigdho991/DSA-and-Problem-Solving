#include <iostream>
using namespace std;

int main () {
    int t, n;
    cin >> t >> n;

    if (t >= n) 
    {
        cout << "Passed :)";
    } else {
        cout << "Failed :(";
    }

    return 0;
}