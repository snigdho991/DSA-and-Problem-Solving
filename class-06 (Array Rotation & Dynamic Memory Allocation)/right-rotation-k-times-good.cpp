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

    // reverse(n - k, n - 1, a);
    // reverse(0, n - k - 1, a);
    // reverse(0, n - 1, a);

    // BEST
    reverse(0, n - 1, a);
    reverse(0, k - 1, a);
    reverse(k, n - 1, a);

    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    
    return 0;
    
}