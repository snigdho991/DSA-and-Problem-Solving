#include <iostream>
using namespace std;

int main () {
    int t;
    cin >> t;

    while (t--)
    {
        int n, x, y;
        cin >> n >> x >> y;

        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        int cnt = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] >= x && a[i] <= y)
            {
                cnt++;
            }
        }
        
        cout << cnt << endl;
        
    }

    return 0;

}