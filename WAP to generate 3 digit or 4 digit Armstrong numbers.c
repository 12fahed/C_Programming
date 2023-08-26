#include <stdio.h>
int main()
{
    printf("KHAN FAHED JAVED\nRoll No: 49  DIV: F  Batch: F3\n\n");
    int i,sum,d,count,j,n1,n2,y;
    printf("Armstrong numbers between 100 to 99999 are:\n");

    for(i=100;i<10000;i++)
    {
        n1=i ,n2=i;
        count = 0;
        while(n1!=0)
        {
            n1=n1/10;
            count++;
        }
        sum = 0;
        while(n2!=0){
            d=n2%10;
            for(j=1,y=1;j<=count;j++){
                y=y*d;
            }
            n2=n2/10;
            sum=sum+y;
        }
        if(sum==i)
            printf("%d\t",i);

    }
        printf("\n\n");

    return 0;
}
