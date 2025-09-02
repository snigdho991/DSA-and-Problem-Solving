#include <stdio.h>
#include <stdlib.h>

int main () {
    int t;
    scanf("%d", &t);

    while (t--) {
        int a, x, y;
        scanf("%d %d %d", &a, &x, &y);

        if (abs(x-y) < abs(a-x) || abs(x-y) < abs(a-y)) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }

    return 0;
}