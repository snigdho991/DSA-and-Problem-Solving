#include <iostream>
using namespace std;

int main () {
    int n;
    cin>>n;

    int a[2*n];
    for (int i = 0; i < 2*n; i++)
    {
        cin>>a[i];
    }

    for (int i = 0; i < 2*n-1; i++)
    {
        for (int j = 0; j < 2*n-i-1; j++)
        {
            if (a[j] > a[j+1]) {
                int temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }     
    }

    int f_sum = 0, l_sum = 0;
    int i = 0, j = 2*n-1;
    
    while (i < j)
    {
        f_sum += a[i];
        i++;

        l_sum += a[j];
        j--;
    }

    if (f_sum != l_sum)
    {
        for (int i = 0; i < 2*n; i++)
        {
            cout<<a[i]<<" ";
        }
        
    } else {
        cout<<"-1";
    }  

    return 0;
}

// https://codeforces.com/problemset/problem/1174/A