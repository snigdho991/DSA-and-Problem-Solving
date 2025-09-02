#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>
#include <set>

using namespace std;

bool check(const vector<int>& a) {
    int n = a.size();
    for (int i = 0; i <= n - 3; ++i) {
        int v1 = a[i];
        int v2 = a[i + 1];
        int v3 = a[i + 2];

        int min_val = min({v1, v2, v3});
        int max_val = max({v1, v2, v3});
        int mex_val;

        set<int> s;
        s.insert(v1);
        s.insert(v2);
        s.insert(v3);
        
        int current_mex = 0;
        while (s.count(current_mex)) {
            current_mex++;
        }
        mex_val = current_mex;
        
        if (mex_val != max_val - min_val) {
            return false;
        }
    }
    return true;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        vector<int> unknown_indices;
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
            if (a[i] == -1) {
                unknown_indices.push_back(i);
            }
        }
        
        int k = unknown_indices.size();
        bool found = false;

        function<bool(int)> solve_recursive = 
            [&](int index) {
            if (index == k) {
                return check(a);
            }

            for (int i = 0; i <= 100; ++i) {
                a[unknown_indices[index]] = i;
                if (solve_recursive(index + 1)) {
                    return true;
                }
            }
            return false;
        };

        if (solve_recursive(0)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}