#include <iostream>
using namespace std;

void fun (int *x) {
    *x = 200;
    // cout<<p<<endl;
}

int main () {
    int x = 10;
    fun(&x);
    // cout<<&x;
    cout<<x;

    return 0;
}


// Reference Dhore Rakha
// void fun (int &p) {
//     p = 400;
// }

// int main () {
//     int x = 10;
//     fun(x);
//     cout<<x;

//     return 0;
// }