#include <iostream>
using namespace std;

// void fun (int *ar)
void fun (int ar[]) {
    ar[0] = 100;
    *(ar+1) = 200;
    *(ar+2) = 300;
}

int main () {
    int ar[] = {1, 2, 3, 4, 5};
    fun(ar);
    cout<<ar[0]<<endl;

    return 0;
}