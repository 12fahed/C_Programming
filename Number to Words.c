#include<stdio.h>

int main(){

    int n,d,count=0, i=0;
    int a[100];
    printf("Enter a number: ");
    scanf("%d", &n);
    int ogn=n;

    while(n!=0){
        n/=10;
        count++;
    }

    a[count];

    while(ogn!=0){
        d=ogn%10;
        a[i]=d;
        ogn/=10;

        i++;
    }

    for(int j=count-1; j>=0; j--){
        switch(a[j]){

        case 0: printf("Zero ");
        break;

        case 1: printf("One ");
        break;

        case 2: printf("Two ");
        break;

        case 3: printf("Three ");
        break;

        case 4: printf("Four ");
        break;

        case 5: printf("Five ");
        break;

        case 6: printf("Six ");
        break;

        case 7: printf("Seven ");
        break;

        case 8: printf("Eight ");
        break;

        case 9: printf("Nine ");
        break;
        }
    }

    printf("\n\n");
}
