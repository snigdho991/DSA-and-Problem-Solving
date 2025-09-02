#include <iostream>
#include <vector>
#include <numeric>
using namespace std;

int main () {
    int t;
    cin >> t;

    while (t--)
    {
        int n, k;
        cin >> n >> k;

        vector<int> a(n);
        for (int &v: a)
        {
            cin >> v;
        }

        vector<int> arr(n, 0);
        bool done = false;
        bool found = false;

        while (!done && !found) 
        {
            int i = 0;
            while (i < n) {
                if (arr[i] == 0) {
                    arr[i] = k;
                    break;
                } else {
                    arr[i] = 0;
                    i++;
                }
            }
            if (i == n) done = true;

            vector<int> temp(arr.size());

            for (int j = 0; j < arr.size(); j++)
            {
                temp[j] = a[j] + arr[j];
            }

            long long g = temp[0];
            for (int i = 1; i < temp.size(); i++) 
            {
                g = gcd(g, temp[i]);
            }

            if (g > 1)
            {
                for (long long x: temp)
                {
                    cout << x << " ";
                }
                cout << endl;

                found = true;
                break;
            }
        }
        
    }
    
    return 0;
}