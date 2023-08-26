#include<stdio.h>

int  main(){

    int n, x=0, x1=1, sum=0;
    printf("Enter the Term: ");
    scanf("%d", &n);

    printf("Fibonacci Series: ");
    if(n==0){
        printf("No Terms\n");
    }

    else if(n==1){
        printf("0\n");
    }

    else if(n==2){
        printf("0 1 \n");
    }

    else if(n<0){
        printf("Enter a whole Number.\n");
    }

    else{
    printf("0 1 ");
    for(int i=0; i<n-2; i++){
        sum=x+x1;

        printf("%d ", sum);
        x=x1;
        x1=sum;
    }
    }
    printf("\n\n");

}
