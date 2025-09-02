#include <iostream>
#include <vector>
using namespace std;

int main () {
    int t;
    cin >> t;

    while (t--)
    {
        int n, k;
        cin >> n >> k;

        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            v.push_back(x);
        }

        int cnt = 0;

        // O(N^3)
        // for (int i = 0; i < v.size(); i++)
        // {
        //     for (int j = i + 1; j < v.size(); j++)
        //     {
        //         if (v[i] + v[j] == k) 
        //         {
        //             v.erase(v.begin() + j);
        //             v.erase(v.begin() + i);
        //             cnt++;
        //             i--;
        //             break;
        //         }
        //     }
            
        // }
        

        // O(NlogN) - For sort
        sort(v.begin(), v.end());
        
        int i = 0; 
        int j = n - 1;

        while (i < j)
        {
            int sum = v[i] + v[j];
            if (sum == k)
            {
                cnt++;
                i++;
                j--;
            } else if (sum < k) {
                i++;
            } else {
                j--;
            }
        }
        
        cout << cnt << endl;
    }
    
    return 0;
    
}

// https://codeforces.com/problemset/problem/2060/C