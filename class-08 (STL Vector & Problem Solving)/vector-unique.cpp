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
    
    // Remove Duplicates from a List
    // INNER LOGICS OF UNIQUE
    // vector<int> track(6, false);
    // for (int x: v)
    // {
    //     if (track[x] == false)
    //     {
    //         cout << x << " ";
    //         track[x] = true;
    //     }
    // }


    // WITH VECTOR'S FUNCTIONS
    // vector<int>::iterator last;
    sort(v.begin(), v.end());
    auto last = unique(v.begin(), v.end());
    v.erase(last, v.end());

    for (int x: v)
    {
        cout << x << " ";
    }
    
    return 0;
}