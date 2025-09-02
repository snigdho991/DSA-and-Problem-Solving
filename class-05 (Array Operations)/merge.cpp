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

    int m;
    cin>>m;
    int b[m];
    for (int i = 0; i < m; i++) 
    {
        cin>>b[i];
    }
    
    int c[n+m];
    int k = 0;

    for (int i = 0; i < n; i++)
    {
        c[k++] = a[i];
        // k++;
    }

    for (int i = 0; i < m; i++)
    {
        c[k++] = b[i];
        // k++;
    }

    for (int i = 0; i < n+m; i++)
    {
       cout<<c[i]<<" ";
    }

    return 0;
    
}