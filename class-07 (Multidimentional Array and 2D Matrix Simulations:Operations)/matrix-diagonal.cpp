#include <iostream>
using namespace std;

int main () {
    int n;
    cin >> n;

    int a[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
    }

    int priSum = 0, secSum = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j) {
                // cout << a[i][j] << endl;
                priSum += a[i][j];
            }

            if (i + j == n - 1) {
                // cout << a[i][j] << endl;
                secSum += a[i][j];
            }
        }   
    }

    int dif = abs(priSum - secSum);
    cout << dif << endl;

    return 0; 
    
}