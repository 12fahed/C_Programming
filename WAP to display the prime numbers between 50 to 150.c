#include <stdio.h>
int main()
{
    int num ,i ,prime;
    printf("KHAN FAHED JAVED\nRoll No: 49  DIV: F  Batch: F3\n\n");
    printf("Prime numbers are between 50 to 150:\n");

    for(num=50;num<150;num++)
    {
        prime =0;
        for(i=2;i<num/2;i++)
        {
            if(num%i==0)
            {
                prime ++;
                break;
            }
        }
        if(prime==0)
        {
            printf("%d\n",num);
        }
    }
    return 0;
}
