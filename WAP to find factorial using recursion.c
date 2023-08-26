#include<stdio.h>
int fact(int f)
{
    if(f==0 || f==1){
        return 1;
    }
    else{
        return f*fact(f-1);
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
