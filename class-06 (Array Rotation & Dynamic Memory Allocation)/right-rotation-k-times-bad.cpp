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
    int k, realIdx;
    cin >> k;

    int ans[n];
    for (int i = 0; i < n; i++)
    {
        realIdx = (i + k) % n;
        ans[realIdx] = a[i];
    }
    
    for (int i = 0; i < n; i++)
    {
        cout << ans[i] << " ";
    }
    
    return 0;
}