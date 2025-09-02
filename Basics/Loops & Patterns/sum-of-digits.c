#include <stdio.h>

int main () {
    int n, sum = 0;
    scanf("%d", &n);
    printf("Digits of %d are : ", n);

    if (n == 0) {
        printf("0");
    } else {

        while (n != 0) {
            int d = n % 10;
            printf("%d ", d);

            sum += d;

            n = n / 10;
        }

    }

    printf("\nSum is : %d", sum);

    return 0;
}