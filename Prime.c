#include<stdio.h>

int main(){

    int n;
    printf("Enter a Number: ");
    scanf("%d", &n);

    for(int i=2; i<=n; i++){
        int prime=0;
        for(int j=2; j<=i/2; j++){
            if(i%j==0){
                prime++;
            }
        }

        if(prime==0){
            printf("%d ", i);
        }
    }
}
