#include <iostream>
using namespace std;

int main () {
    int n;
    cin >> n;

    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }

    int val;
    cin >> val;

    // O(N^2)
    // while (find(v.begin(), v.end(), val) != v.end())
    // {
    //     auto it = find(v.begin(), v.end(), val);
    //     v.erase(it);
    // }

    // O(N)
    auto last = remove(v.begin(), v.end(), val);
    v.erase(last, v.end());
    
    for (int &x: v)
    {
        cout << x << " ";
    }

    return 0;
}