#include <stdio.h>

int main () {
    int n;
    scanf("%d", &n);
    printf("Divisors of %d are : ", n);

    int count = 0;
    for (int i = 1; i * i <= n; i++) {
        if (n % i == 0) {
            printf("%d ", i);
            count++;

            if (i != n / i) {
                printf("%d ", n / i);
                count++;
            }
        }
    }

    printf("\nTotal divisors: %d", count);

    return 0;
}