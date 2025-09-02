#include <iostream>
#include <numeric>
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

    // fill(v.begin(), v.end(), 100);

    // rotate(v.begin(), v.begin()+3 , v.end()); // left rotate
    // rotate(v.begin(), v.end()-3 , v.end()); // right rotate

    // for (int x: v)
    // {
    //     cout << x << " ";
    // }

    int sum = accumulate(v.begin(), v.end(), 0);
    cout << sum;

    return 0;
}