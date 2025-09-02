#include <stdio.h>

int main () {
    long long x, y, n;
    scanf("%lld %lld %lld", &x, &y, &n);

    if (x >= y) {
        printf("0");
    } else {
        long long required = y - x;
        if (required <= n) {
            printf("%lld", required);
        } else {
            printf("The dogs will bite Sh7ata.");
        }
    }

    return 0;
}

// https://codeforces.com/group/TyLNzrd4HT/contest/261255/problem/A