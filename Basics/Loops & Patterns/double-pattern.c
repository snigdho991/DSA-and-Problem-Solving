#include <stdio.h>

int main () {
    while (1) {
        int h, w;
        scanf("%d %d", &h, &w);

        if (h == 0 || w == 0) break;

        int c = 0;

        for (int i = 1; i <= h; i+=2) {
            if (c % 2 == 0) {
                for (int j = 1; j <= w; j++) {
                    printf("#");
                }
                printf("\n");
                
                if (i != h) {
                    for (int j = 1; j <= w; j++) {
                        printf("#");
                    }
                    printf("\n");
                }
            } else {
                for (int j = 1; j <= w; j++) {
                    printf(".");
                }
                printf("\n");
                
                if (i != h) {
                    for (int j = 1; j <= w; j++) {
                        printf(".");
                    }
                    printf("\n");
                }
            }
            c++;
        }
    }
    
    return 0;
}