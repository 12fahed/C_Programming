
#include<stdio.h>
int main(){

    int a,b,c;
    printf("Enter Three Numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    if(a>b){
        if(a>c){
            printf("A is greatest\n");
       }

       else{
            printf("C s greatest");
       }
    }

    else{
        if(b>c){
            printf("B is Greatest\n");
        }

        else{
            printf("C is Greatest\n");
        }
    }

    return 0;
}
