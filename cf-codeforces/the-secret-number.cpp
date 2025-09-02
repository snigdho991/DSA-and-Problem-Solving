#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) 
    {
        long long n;
        cin >> n;

        vector<long long> ans;
        for (int k = 1; k <= 18; k++) 
        {
            long long d = 1;
            for (int i = 0; i < k; i++) 
            {
                d *= 10;
            }
            
            d += 1;

            if (n % d == 0) 
            {
                long long x = n / d;
                ans.push_back(x);
            }
        }

        if (ans.empty()) 
        {
            cout << 0 << endl;
        } else {
            sort(ans.begin(), ans.end());
            cout << ans.size() << endl;
            for (int i = 0; i < (int)ans.size(); i++) 
            {
                if (i + 1 == ans.size()) 
                {
                    cout << ans[i] << endl;
                } else {
                    cout << ans[i] << " ";
                }
            }
        }
    }

    return 0;
}
