#include <iostream>
using namespace std;

int main () {
    int n;
    cin >> n;

    vector<int> v(n);
    for (int &x: v)
    {
        cin >> x;
    }
    
    // vector<int>::iterator max;
    auto max = max_element(v.begin(), v.end());
    vector<int> freq(*max + 1, 0);

    for (int &x: v)
    {
        freq[x]++;
    }

    // for (int i = 0; i < *max + 1; i++)
    // {
    //     if (freq[i] != 0) {
    //         cout << i << " " << freq[i] << endl;
    //     }
    // }

    sort(v.begin(), v.end());
    auto last = unique(v.begin(), v.end());
    v.erase(last, v.end());
    
    for (int x: v)
    {
        cout << x << " " <<freq[x] << endl;
    }

    return 0;
}