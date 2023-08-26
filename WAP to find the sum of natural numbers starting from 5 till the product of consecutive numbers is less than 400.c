#include<stdio.h>
int main()
{
    int i,j,sum=0;
    printf("KHAN FAHED JAVED\nRoll No: 49  DIV: F  Batch: F3\n\n");
    for(i=5, j=i+1; (i*j)<400; i++, j++)
    sum+=i;
    printf("The sum of all natural numbers Starting from 5 till the product of consecutive numbers is less than 400 is %d\n\n", sum);

    return 0;

}
