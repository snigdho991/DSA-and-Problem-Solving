#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main () {
    int n, q;
    cin >> n >> q;

    vector<int> v(n);
    for (int &x: v)
    {
        cin >> x;
    }

    while (q--)
    {
        string op;
        cin >> op;

        if (op == "pop_back") {
            v.pop_back();
        } else if (op == "front") {
            cout << v.front() << endl;
        } else if (op == "back") {
            cout << v.back() << endl;
        } else if (op == "sort") {
            int l, r;
            cin >> l >> r;
            l--, r--;
            if (l > r)
            {
                swap(l, r);
            }
            sort(v.begin()+l, v.begin()+r+1);
        } else if (op == "reverse") {
            int l, r;
            cin >> l >> r;
            l--, r--;
            if (l > r)
            {
                swap(l, r);
            }
            reverse(v.begin()+l, v.begin()+r+1);
        } else if (op == "print") {
            int pos;
            cin >> pos;
            cout << v[pos - 1] << endl;
        } else if (op == "push_back") {
            int x;
            cin >> x;
            v.push_back(x);
        }
    }

    return 0;
}