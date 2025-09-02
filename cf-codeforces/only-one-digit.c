#include <stdio.h>

int main () {
    int n;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        char number[1000];
        scanf("%s", number);

        char min = '9';
        for (int j = 0; number[j] != '\0'; j++) {
            if (number[j] < min) {
                min = number[j];
            }
        }

        printf("%c\n", min);
    }

    return 0;
}

// https://codeforces.com/contest/2126/problem/A