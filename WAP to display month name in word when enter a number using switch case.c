#include<stdio.h>
int main()
{
    int n;
    here:
    printf("Enter the month number (1-12): ");
    scanf("%d", &n);
    switch (n){
       case 1: printf("Month %d is January", n);
       break;

       case 2: printf("Month %d is February", n);
       break;

       case 3: printf("Month %d is March", n);
       break;

       case 4: printf("Month %d is April", n);
       break;

       case 5: printf("Month %d is May", n);
       break;

       case 6: printf("Month %d is June", n);
       break;

       case 7: printf("Month %d is July", n);
       break;

       case 8: printf("Month %d is August", n);
       break;

       case 9: printf("Month %d is September", n);
       break;

       case 10: printf("Month %d is October", n);
       break;

       case 11: printf("Month %d is November", n);
       break;

       case 12: printf("Month %d is December", n);
       break;

       default: printf("Invalid Month Number. Try again !");
       goto here;

    }
    printf("\n\n");
    return 0;
}
