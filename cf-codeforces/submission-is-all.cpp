#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int freq[51] = {0}; 
        for (int i = 0; i < n; ++i) {
            int s_val;
            cin >> s_val;
            if (s_val <= 50) {
                freq[s_val]++;
            }
        }

        long long total_score = 0;
        
        int num_mex_2_ops = min(freq[0], freq[1]);
        total_score += static_cast<long long>(num_mex_2_ops) * 2;

        freq[0] -= num_mex_2_ops;
        freq[1] -= num_mex_2_ops;

        int num_mex_1_ops = freq[0];
        total_score += static_cast<long long>(num_mex_1_ops) * 1;

        freq[0] -= num_mex_1_ops;

        for (int i = 0; i <= 50; ++i) {
            total_score += static_cast<long long>(i) * freq[i];
        }
        
        cout << total_score << endl;
    }
    return 0;
}