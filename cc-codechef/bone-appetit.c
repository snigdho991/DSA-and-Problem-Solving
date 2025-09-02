#include <stdio.h>

int main() {
    int n, m, x, y;
    scanf("%d %d", &n, &m);
    scanf("%d %d", &x, &y);
    
    int t = n * x + m * y;
    printf("%d", t);
    
    return 0;
}

// https://www.codechef.com/problems/BNE_APT