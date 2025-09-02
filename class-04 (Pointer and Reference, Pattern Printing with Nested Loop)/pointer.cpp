#include <iostream>
using namespace std;

int main () {
    int a = 10;

    int *p = &a;
    // *p = 20; [That means, a=20]
    // cout<<*p<<endl;

    int * *q = &p;
    * *q = 30;
    cout<<* *q<<endl;

    return 0; 
}