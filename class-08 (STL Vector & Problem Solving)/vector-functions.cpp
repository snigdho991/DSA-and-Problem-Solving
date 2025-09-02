#include <iostream>
using namespace std;

int main () {
    int n;
    cin >> n;
    // vector<int> v = {1, 2, 3, 4, 5};

    // for (int i = 0; i < v.size(); i++)
    // {
    //     cout << v[i] << " ";
    // }
    
    // cout << v.at(7); // Out of range
    // cout << v.at(3);
    // cout << v[3];

    // cout << v.front();
    // cout << v.back();


    vector<int> v;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    
    // cout << v.capacity() << " ";
    // v.shrink_to_fit();
    // cout << v.capacity();

    // v.insert(v.begin()+2, 100);
    // v.insert(v.begin()+2, 3, 100);
    // v.insert(v.end(), 100);
    // v.erase(v.begin()+1, v.begin()+4);
    // v.erase(v.begin()+1, v.end());
    vector<int> v1 = {40, 50, 60};
    // v.insert(v.begin()+1, v1.begin(), v1.end());
    // v.swap(v1);
    // v.clear();
    // if (v.empty()) {
    //     cout << "empty" << endl;
    // }

    // vector<int>::iterator it; // we can use auto instead of this
    // it = v.end()-1;
    // cout << *it << endl;
    // for (auto it = v.begin(); it != v.end(); it++)
    // {
    //     cout << *it << " " << endl;
    // }
    
    // for (int x: v)
    // {
    //     cout << x << " ";
    // }

    for (auto x: v)
    {
        cout << x << " ";
    }

    return 0;

}