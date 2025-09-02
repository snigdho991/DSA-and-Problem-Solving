#include <iostream>
using namespace std;

void fun (int x) {
    x = 300;
    cout<<x<<endl;
}

int main () {
    int x = 10;
    fun(x);
    cout<<x<<endl;

    return 0;
}