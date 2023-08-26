#include<stdio.h>
#include<math.h>
int countDigits(int num){
    int count = 0;

    while (num != 0){
        num/=10;
        count++;
    }

    return count;
}

int isarmstrong(int num){
    int a=num/100;
    int b=num%100/10;
    int c=(num%100)%10;
    int armstrong= (pow(a,3)+pow(b,3)+pow(c,3));
    if(num==armstrong){
    printf("%d is an Armstrong Number.\n", num);
     }
    else{
        printf("%d is not an Armstrong Number.\n", num);
    }
}

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    int digitCount = countDigits(num);

    if(digitCount != 3){
        printf("Invalid Input ! Please enter 3 Digit number only.\n");
    }

    else{
    isarmstrong(num);
    }

    return 0;
}
