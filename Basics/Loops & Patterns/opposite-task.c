#include <stdio.h>

int main () {
    int t;
    scanf("%d", &t);
    
    while (t--) {
        int n;
        scanf("%d", &n);
        int a = n/2;
        int b = n-a;
        printf("%d %d\n", a, b);
    }

    return 0;
}

// https://lightoj.com/problem/opposite-task