#include <stdio.h>

int main() {
    int x;
    scanf("%d", &x);
    
    if (x >= 1973 && x <= 2024) {
        int n = x % 100;
        printf("K%02d", n);
    }
    
    return 0;
}

// https://www.codechef.com/problems/PHONEYR