#include<stdio.h>
int main()

{
    int a[100][100], m, sum=0;
    printf("Enter the order of the Square Matrix (order less than 100): ");
    scanf("%d", &m);
    printf("A %dx%d matrix is been created.", m,m);
    a[m][m];

    printf("\n\nEnter the elements of the Matrix (filling column wise): ");
    for(int i=0; i<m; i++){
        for(int j=0; j<m; j++){
            scanf("%d", &a[i][j]);
        }
    }

    printf("\nThe matrix created is:\n");
    for(int i=0; i<m; i++){
        for(int j=0; j<m; j++){
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    printf("\nThe Summation of all the Diagonal elements of the Matrix (Trace): ");
    for(int i=0; i<m; i++){
           sum+=a[i][i];
        }

    printf("%d", sum);
    printf("\n\n");
    return 0;

}
