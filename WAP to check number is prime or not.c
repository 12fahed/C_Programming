#include <stdio.h>
int isPrime(int num) {
    if (num < 2) {
        return 0;
    }

    for (int i = 2; i<= num/2; i++){
        if (num % i == 0){
            return 0;
        }
    }

    return 1;
}

int main(){
    int num;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    if(num==0 || num==1){
        printf("%d is neither prime nor composite\n", num);;
    }
    else if (isPrime(num)){
        printf("\n%d is a prime number.\n", num);
    }

    else {
        printf("\n%d is not a prime number.\n", num);
        printf("The factors of %d are: ", num);
        for(int i=1; i<=num/2; i++){
            if(num%i==0){
                printf("%d ", i);
            }
        }
        printf("\n");
    }

    return 0;
}
