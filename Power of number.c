#include<stdio.h>

float power(float x, float n){

    if(n==0){
        return 1;
    }

    else if(n>0){
        return x*power(x, n-1);
    }

    else if(n<0){
        return (1/x)*(power(x, (n+1)));
    }
}

int main (){

    float x,n;
    printf("Enter the Base: ");
    scanf("%f", &x);
    printf("Enter the Power: ");
    scanf("%f", &n);
    printf("\nAns: %.3f", power(x,n));

    return 0;
}
