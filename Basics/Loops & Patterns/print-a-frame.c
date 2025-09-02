#include <stdio.h>

int main () {
    while (1) {
        int h, w;
        scanf("%d %d", &h, &w);

        if (h == 0 || w == 0) break;

        for (int i = 1; i <= h; i++) {
            for (int j = 1; j <= w; j++) {
                if (i == 1 || i == h || j == 1 || j == w) {
                    printf("#");
                } else {
                    printf(".");
                }
            }
            printf("\n");
        }
        printf("\n");
    }

    return 0;
}

// https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ITP1_5_B