#include <iostream>
using namespace std;

int main () {
    int n;
    cin>>n;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin>>a[i];
    }

    int i = 0, j = n-1;
    while (i<j) {
        swap(a[i], a[j]);
        i++;
        j--;
    }

    // for (int i = 0, j = n-1; i < j; i++, j--) {
    //     swap(a[i], a[j]);
    // }

    for (int i = 0; i < n; i++) {
        cout<<a[i]<<" ";
    }

    return 0;
}