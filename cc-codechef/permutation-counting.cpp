#include <iostream>
#include <vector>
#include <numeric>

const long long MOD = 998244353;

// Precompute factorials for final calculation
std::vector<long long> fact;

void precomputeFactorials(int n) {
    fact.resize(n + 1);
    fact[0] = 1;
    for (int i = 1; i <= n; ++i) {
        fact[i] = (fact[i - 1] * i) % MOD;
    }
}

long long dp[101][101][101][3];

void solve() {
    int n;
    int k;
    std::cin >> n >> k;

    if (k != 3) {
        return;
    }

    int c0 = n / 3;
    int c1 = (n + 2) / 3;
    int c2 = (n + 1) / 3;

    // Initialize DP table with zeros
    for (int i = 0; i <= c0; ++i) {
        for (int j = 0; j <= c1; ++j) {
            for (int l = 0; l <= c2; ++l) {
                dp[i][j][l][0] = dp[i][j][l][1] = dp[i][j][l][2] = 0;
            }
        }
    }

    // Base cases for single-element permutations
    if (c0 >= 1) dp[1][0][0][0] = 1;
    if (c1 >= 1) dp[0][1][0][1] = 1;
    if (c2 >= 1) dp[0][0][1][2] = 1;

    // Fill the DP table using a bottom-up approach
    for (int i = 0; i <= c0; ++i) {
        for (int j = 0; j <= c1; ++j) {
            for (int l = 0; l <= c2; ++l) {
                // Skip base cases and the empty state, which are already initialized
                if (i + j + l <= 1) continue;

                // Case 1: Last element has remainder 0
                if (i > 0) {
                    dp[i][j][l][0] = (dp[i - 1][j][l][1] + dp[i - 1][j][l][2]) % MOD;
                }

                // Case 2: Last element has remainder 1
                if (j > 0) {
                    dp[i][j][l][1] = (dp[i][j - 1][l][0] + dp[i][j - 1][l][1]) % MOD;
                }

                // Case 3: Last element has remainder 2
                if (l > 0) {
                    dp[i][j][l][2] = (dp[i][j][l - 1][0] + dp[i][j][l - 1][2]) % MOD;
                }
            }
        }
    }

    // Sum up the number of valid remainder permutations
    long long total_arrangements = (dp[c0][c1][c2][0] + dp[c0][c1][c2][1] + dp[c0][c1][c2][2]) % MOD;

    // Multiply by factorials to get the final count of permutations
    long long ans = (total_arrangements * fact[c0]) % MOD;
    ans = (ans * fact[c1]) % MOD;
    ans = (ans * fact[c2]) % MOD;

    std::cout << ans << std::endl;
}

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    precomputeFactorials(100);

    int t;
    std::cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
