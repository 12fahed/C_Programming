#include <stdio.h>

double power(int x, int n);

int main() {
    int x, n;
    printf("Enter the value of x: ");
    scanf("%d", &x);
    printf("Enter the value of n: ");
    scanf("%d", &n);

    double result = power(x, n);

    printf("Result: %.2lf\n", result);

    return 0;
}

double power(int x, int n) {
    double result = 1.0;
    int i;

    if (n >= 0) {
        for (i = 0; i < n; i++) {
            result *= x;
        }
    } else {
        n = -n;
        for (i = 0; i < n; i++) {
            result /= x;
        }
    }

    return result;
}
