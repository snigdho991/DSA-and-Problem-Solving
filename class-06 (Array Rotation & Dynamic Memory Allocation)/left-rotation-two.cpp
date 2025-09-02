#include <iostream>
using namespace std;

int main () {
    int n;
    cin>>n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin>>a[i];

    int temp = a[0];
    int temp_two = a[1];

    for (int i = 2; i < n; i++)
    {
        a[i-2] = a[i];
    }

    a[n-2] = temp;
    a[n-1] = temp_two;
    
    for (int i = 0; i < n; i++) 
    {
        cout<<a[i]<<" ";
    }

    return 0;
    
}