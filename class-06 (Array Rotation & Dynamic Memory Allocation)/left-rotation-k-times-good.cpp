#include <iostream>
using namespace std;

void reverse (int i, int j, int a[]) 
{
    while (i < j)
    {
        swap(a[i], a[j]);
        i++;
        j--;
    }
}

int main () {
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int k;
    cin >> k;

    k = k % n;

    reverse(0, k - 1, a);
    reverse(k, n - 1, a);
    reverse(0, n - 1, a);

    // int i = 0, j = k - 1;
    // while (i < j) {
    //     swap(a[i], a[j]);
    //     i++;
    //     j--;
    // }

    // i = k, j = n - 1;
    // while (i < j) {
    //     swap(a[i], a[j]);
    //     i++;
    //     j--;
    // }

    // i = 0, j = n - 1;
    // while (i < j) {
    //     swap(a[i], a[j]);
    //     i++;
    //     j--;
    // }

    for (int i = 0; i < n; i++)
    {
        cout << a[i] <<" ";
    }
    
    return 0;
    
}