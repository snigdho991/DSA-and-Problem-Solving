#include <stdio.h>
#include <stdbool.h>

bool isPerfectSquare[100000001];

int main () {
    int n;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        isPerfectSquare[i * i] = true;
    }

    int cnt = 0;
    for (int a = 1; a <= n; a++) {
        for (int b = a; b <= n; b++) {
            int csquare = a * a + b * b;

            if (csquare <= n * n && isPerfectSquare[csquare]) {
                cnt++;
            }
        }
    }

    printf("%d\n", cnt);

    return 0;
}

// Bruteforce Solutions
// https://codeforces.com/problemset/problem/304/A