#include<stdio.h>
int fact(int f)
{
    int a=1;
    for(int i=1;i<=f;i++){
        a*=i;
    }

    return a;
}

int main()

{
    int n,r,ncr;
    printf("KHAN FAHED JAVED\nRoll No: 49  DIV: F  Batch: F3\n\n");
    printf("Enter the Value of n: ");
    scanf("%d", &n);
    printf("Enter the Value of r: ");
    scanf("%d", &r);

    if(r>n){
        printf("Invalid Input! Value of r cannot be greater than n\n");
    }

    else{

         ncr=fact(n)/(fact(n-r)*fact(r));
         printf("\nnCr Value is %d", ncr);

    }

    printf("\n\n");
    return 0;

}
