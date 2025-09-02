#include <iostream>
using namespace std;

int main () {
    int n;
    cin>>n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }

    int temp = a[n-1];
    int temp_two = a[n-2];

    for (int i = n-2; i >= 0; i--)
    {
        a[i+2] = a[i];
    }
    a[0] = temp_two;
    a[1] = temp;

    for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<" ";
    }
    
    return 0;
}