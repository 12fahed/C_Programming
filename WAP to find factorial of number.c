#include<stdio.h>
int fact(int f)
{
    int a=1;
    if(f>0){
        for(int i=1;i<=f;i++){
        a*=i;
    }

    return a;
    }
    else{
        return a;
    }

}

int main()

{
    int n;
    printf("KHAN FAHED JAVED\nRoll No: 49  DIV: F  Batch: F3\n\n");
    printf("Enter a number: ");
    scanf("%d", &n);
    if(n<0){
        printf("Factorial of negative numbers are not defined.\n\n");
    }
    else{
        printf("The factorial of %d = %d\n\n", n, fact(n));
    }
    return 0;

}
