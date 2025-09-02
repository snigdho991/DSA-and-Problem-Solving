#include <stdio.h>
#include <stdbool.h>

bool isThree(int n) {
    int cnt = 0;
    for (int i = 1; i * i <= n; i++) {
        if (n % i == 0) {
            cnt++;
            if (i != n / i) {
                cnt++;
            }
        }
    }

    if (cnt == 3) {
        printf("true");
        return true;
    }

    printf("false");
    return false;
}

int main () {
    int n;
    scanf("%d", &n);
    isThree(n);

    return 0;
}

// https://leetcode.com/problems/three-divisors