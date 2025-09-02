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

    int k = 0;
    int c[n+m];
    int i = 0, j = 0;

    while (i < n && j < m) 
    {
        if (a[i] < b[j]) 
        {
            c[k++] = a[i];
            // k++;
            i++;
        } else {
            c[k++] = b[j];
            // k++;
            j++;
        }
    }

    while (i < n)
    {
        c[k++] = a[i];
        i++;
    }

    while (j < m)
    {
        c[k++] = b[j];
        j++;
    }

    for (int i = 0; i < n+m; i++)
    {
        cout<<c[i]<<" ";
    }

    return 0;
    
}