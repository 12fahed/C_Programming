#include<stdio.h>
int main()

{
    int i,j,k,n;
    printf("KHAN FAHED JAVED\nRoll No: 49  DIV: F  Batch: F3\n\n");
    printf("Enter the number of Rows: ");
    scanf("%d", &n);

    for(i=0;i<n;i++){

        for(j=0;j<=n-i;j++)
            printf(" ");
        for(k=0;k<=i;k++)
            printf("%d", k+1);
        for(j=i;j>0;j--)
            printf("%d", j);
        printf("\n");
    }

    return 0;
}
