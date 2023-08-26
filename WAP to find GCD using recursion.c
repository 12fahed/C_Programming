#include <stdio.h>

int findGCD(int a, int b) {
    if (b == 0) {
        return a;
    } else {
        return findGCD(b, a % b);
    }
}

int main() {
    int num1, num2;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    int gcd = findGCD(num1, num2);

    printf("GCD of %d and %d is %d\n", num1, num2, gcd);
    printf("LCM of the %d and %d is %d\n", num1, num2, (num1*num2)/gcd);

    return 0;
}
