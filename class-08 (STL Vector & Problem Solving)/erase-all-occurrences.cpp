#include <iostream>
using namespace std;

int main () {
    int n;
    cin >> n;

    vector<int>v;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    
    // O(N^2)
    // while (find(v.begin(), v.end(), 5) != v.end())
    // {
    //     v.erase(find(v.begin(), v.end(), 5));
    // }

    // O(N)
    v.erase(remove(v.begin(), v.end(), 5), v.end());

    cout << v.size() << endl;
    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }

    return 0;
    
}