#include <iostream>
using namespace std;

int main () {
    int a[5] = {1, 2, 3, 4, 5};
    // cout<<a<<" "<<&a[0]<<endl;
    
    // cout<<a+1<<" "<<&a[1]<<endl;
    // cout<<*(a+1)<<" "<<a[1]<<endl;

    int *p = &a[2];
    cout<<*(p-2)<<endl;
    
    return 0;
}