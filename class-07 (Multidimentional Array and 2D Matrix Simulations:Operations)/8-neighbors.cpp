#include <iostream>
using namespace std;

bool valid (int i, int j, int n, int m) {
    if (i >= 0 && j >= 0 && i < n && j <m)
    {
        return true;
    } else {
        return false;
    }
}

int main () {
    int n, m;
    cin >> n >> m;

    char a[n][m]; // CHAR
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
    }

    int x, y;
    cin >> x >> y;
    x--;
    y--;

    int dx[] = {0, 0, -1, 1, -1, 1, 1, -1};
    int dy[] = {1, -1, 0, 0, 1, 1, -1, -1};

    bool isNeighbor = true;
    for (int i = 0; i < 8; i++)
    {
        int ni = x + dx[i];
        int nj = y + dy[i];

        // cout << x << " " << y << endl;

        if (valid(ni, nj, n, m) && a[ni][nj] != 'x')
        {
            isNeighbor = false;
        }
    }

    if (isNeighbor)
    {
        cout << "yes" << endl;
    } else {
        cout << "no" << endl;
    }
    
    return 0;
    
}