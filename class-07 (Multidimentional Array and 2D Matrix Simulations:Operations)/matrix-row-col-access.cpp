#include <iostream>
using namespace std;

int main () {
    int row, col;
    cin >> row >> col;
    int a[row][col];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> a[i][j];
        }
    }

    int idx;
    cin >> idx;

    // Search Row
    for (int i = 0; i < col; i++)
    {
        cout << a[idx][i] << " ";
    }

    cout << endl;

    // Search Column
    for (int i = 0; i < row; i++)
    {
        cout << a[i][idx] << " ";
    }
    
    return 0;
    
}