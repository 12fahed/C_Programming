#include<stdio.h>
int main()
{
    int integers[100], n,i,min,max;
    printf("KHAN FAHED JAVED\nRoll No: 49  DIV: F  Batch: F3\n\n");
    printf("Enter the size of the array\n");
    scanf("%d", &n);
    printf("The array is of the size %d\n\n", n);
    printf("Enter the elements of the array\n");

    for(i=0; i<n; i++)
    {
        scanf("%d", &integers[i]);
    }

    min=max=integers[0];
    for(i=1; i<n; i++)
    {
        if(integers[i]<=min)
        {
            min=integers[i];
        }

        if(integers[i]>=max)
        {
            max=integers[i];
        }
    }

    printf("Min = %d, Max = %d", min, max);
    printf("\n\n");

    return 0;

}
