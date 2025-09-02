#include <stdio.h>

int main () {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    int sum = 0;

    if (a < b) {
        if (b < c) {
            sum = b + c;
        } else {
            if (a > c) {
                sum = a + b;
            } else {
                sum = b + c;
            }
        } 
    } else {
        if (b > c) {
            sum = a + b;
        } else {
            sum = a + c;
        }
    }

    printf("%d", sum);

    return 0;
}