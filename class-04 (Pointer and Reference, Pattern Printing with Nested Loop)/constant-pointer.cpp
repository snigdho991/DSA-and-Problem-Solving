#include <iostream>
using namespace std;

int main () {

    // Constant Variable and Normal Pointer
    // const int a = 10;
    // const int *p = &a;

    // int b = 20;
    // p = &b;
    // cout<<*p;


    // Normal Variable and Constant Pointer
    // int a = 30;
    // int * const p = &a;

    // int b = 40;
    // *p = b;
    // cout<<*p;


    // Constant Variable and Constant Pointer
    const int a = 50;
    const int * const p = &a;
    cout<<*p;

    return 0;
}