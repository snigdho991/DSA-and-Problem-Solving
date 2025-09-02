#include <iostream>
using namespace std;

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

    int ans[n];
    for (int i = 0; i < n; i++)
    {
        int realIdx = (i - k + n) % n;
        ans[realIdx] = a[i];
    }

    for (int i = 0; i < n; i++)
    {
        cout<<ans[i]<<" ";
    }

    return 0;
    
}