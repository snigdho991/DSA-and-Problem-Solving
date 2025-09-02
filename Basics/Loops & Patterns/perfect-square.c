#include <stdio.h>
#include <stdbool.h>

int main () {
    long long n;
    scanf("%lld", &n);

    bool isPerfect = false;
    for (long long i = 1; i * i <= n; i++) {
        if (i * i == n) {
            printf("%lld is a perfect square\n", n);
            isPerfect = true;
        }
    }

    if (!isPerfect) {
        printf("%lld is not a perfect square\n", n);
    }

    return 0;
}

// https://leetcode.com/problems/valid-perfect-square