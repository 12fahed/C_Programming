#include<stdio.h>
int main()

{
    int array[100], i,c,j,n;
    printf("KHAN FAHED JAVED\nRoll No: 49  DIV: F  Batch: F3\n\n");
    printf("Enter the size of the array\n");
    scanf("%d", &n);
    array[n];
    printf("An array of %d has been created\n\n", n);
    printf("Enter the %d elements of the array\n", n);

    for(i=0; i<n; i++)
    {
        scanf("%d", &array[i]);
    }

    printf("\nEnter the number you want to check\n");
    scanf("%d", &j);

    for(i=0; i<n; i++)
    {
        if(j==array[i])
        {
            c=j;
            break;
        }
    }

    if(c==j){
        printf("The entered number (%d) is present in the array\n", j);
    }
    else{
        printf("The entered number (%d) is not present in the array\n", j);
    }
    printf("\n\n");
    return 0;


}
