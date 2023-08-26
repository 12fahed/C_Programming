#include<stdio.h>
#include<math.h>

int main() {
    int a, n, count = 0;
    float result = 0;
    printf("Enter a Number: ");
    scanf("%d", &n);

    a = n;
    while (a != 0) {
        a = a / 10;
        count++;
    }

    a = n;
    while (a != 0) {
        int digit = a % 10;
        result = result + pow(digit, count);
        a = a / 10;
    }

    printf("Result = %.0f\n", result);

    if (result == n) {
        printf("Armstrong");
    }
    else {
        printf("Not an Armstrong");
    }

    return 0;
}
