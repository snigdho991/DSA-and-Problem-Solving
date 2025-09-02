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

    auto min = min_element(v.begin(), v.end()); // iterator
    auto max = max_element(v.begin(), v.end());

    int cnt = count(v.begin(), v.end(), 5);

    // cout << *min << " " << *max;
    // cout << cnt;

    return 0;
}