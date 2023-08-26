#include<stdio.h>
int main()

{
   int sum=0,x,i;
   int n=0,n1=1;
   printf("KHAN FAHED JAVED\nRoll No: 49  DIV: F  Batch: F3\n\n");
   start:
   printf("Enter a whole Number: ");
   scanf("%d", &x);

   if(x==0){
       printf("%d is present in the Fibonacci Series at the %dst place position\n\n", x, 1);
       goto down;
   }

   else if(x==1){
       printf("%d is present in the Fibonacci Series at the %dnd and 3rd place position\n\n", x, 2);
       goto down;
   }

   else if(x<0){
    printf("Invalid Input. Try again.\n\n");
    goto start;
   }

   for(i=1;;i++){
       sum=n+n1;
       if(sum==x){
           printf("%d is present in the Fibonacci Series at %dth position\n\n", x, (i+2));
           break;
       }

       else if(x<sum){
           printf("%d is not present in the Fibonacci Series\n\n", x);
           break;
       }

       n=n1;
       n1=sum;
   }

   down:
   return 0;

}
