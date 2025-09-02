#include <iostream>
using namespace std;

int main () {

    int n;
    cin >> n;

    // vector<int> v;
    // for (int i = 0; i < n; i++)
    // {
    //     int x;
    //     cin >> x;
    //     v.push_back(x);
    // }

    vector<int> v(n);
    // for (int i = 0; i < n; i++)
    // {
    //     cin >> v[i];
    // }
    

    // for (int i = 0; i < n; i++)
    // {
    //     cout << v[i] << " ";
    // }

    // For STL - Range Based Loop

    for (int &x: v)
    {
        cin >> x;
    }

    // for (int &x: v)
    // {
    //     x += 20;
    // }
    
    for (int x: v)
    {
        cout << x << " ";
    }
    
    return 0;
    
}