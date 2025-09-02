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

    // sort(v.begin()+1, v.begin()+4);
    // reverse(v.begin()+1, v.begin()+4);
    // sort(v.begin(), v.end());
    // reverse(v.begin(), v.end());
    // sort(v.begin(), v.end(), greater<int>());

    // for (int x: v)
    // {
    //     cout << x << " ";
    // }

    // vector<int>::iterator it;
    auto it = find(v.begin(), v.end(), 5);
    cout << it - v.begin() << endl;

    // if (*it) {
    //     cout << "yes";
    // }
    
    return 0;

}