#include <stdio.h>

int main () {
    int t;
    scanf("%d", &t);

    while (t--) {
        int k;
        scanf("%d", &k);

        int cnt = 0;
        for (int i = 1; ; i++) {
            if (i % 3 == 0 || i % 10 == 3) {
                continue;
            }
            cnt++;

            if (cnt == k) {
                printf("%d\n", i);
                break;
            }
        }
    }

    return 0;
}

// https://codeforces.com/contest/1560/problem/A