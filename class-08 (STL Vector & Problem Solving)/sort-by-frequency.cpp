#include <iostream>
using namespace std;

vector<int> freq;

bool cmp (int a, int b) {
    if (freq[a] > freq[b]) {
        return true;
    } else if (freq[a] < freq[b]) {
        return false;
    } else {
        if (a > b) 
            return true;
        else 
            return false;
    }
}

int main () {
    // vector<int> v = {1, 4, 5, 1, 2, 3, 5, 6, 4, 1, 2, 5, 3};

    int n;
    cin >> n;

    freq.assign(n + 1, 0);

    vector<int> v(n);
    for (int &x: v)
    {
        cin >> x;
    }

    for (int &x: v)
    {
        freq[x]++;
    }

    sort(v.begin(), v.end(), cmp);

    // auto last = unique(v.begin(), v.end());
    // v.erase(last, v.end());
    // cout << v.size() << endl;
    for (int x: v)
    {
        cout << x << " " << freq[x] << endl;
    }

    return 0;
}