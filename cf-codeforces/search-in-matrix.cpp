#include <iostream>
using namespace std;

int main () {
    int m, n;
    cin >> m >> n;
    
    int a[m][n];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
        
    }
    
    int p;
    cin >> p;

    bool flag = false;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (a[i][j] == p)
            {
                flag = true;
                break;
            }
        }
        
    }

    if (flag)
    {
        cout << "will not take number";
    } else {
        cout << "will take number";
    }
    
    return 0;

}