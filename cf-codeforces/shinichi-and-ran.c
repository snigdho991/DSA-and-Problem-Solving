#include <stdio.h>

int main () {
    int d;
    scanf("%d", &d);

    if (d >= 22 && d <= 25) {
        if (d == 22) {
            printf("Christmas Eve Eve Eve");
        } else if (d == 23) {
            printf("Christmas Eve Eve");
        } else if (d == 24) {
            printf("Christmas Eve");
        } else if (d == 25) {
            printf("Christmas");
        }
    }

    return 0;
}

// https://codeforces.com/group/TyLNzrd4HT/contest/262189/problem/E