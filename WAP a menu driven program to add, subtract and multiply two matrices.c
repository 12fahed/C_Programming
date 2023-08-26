#include<stdio.h>
int main()

{
    int x,y,x1,y1,a1[100][100],a2[100][100],sum,diff;
    printf("KHAN FAHED JAVED\nRoll No: 49  DIV: F  Batch: F3\n\n");
    printf("Enter the number of rows of Matrix A: ");
    scanf("%d", &x);
    printf("Enter the number of columns of Matrix A: ");
    scanf("%d", &y);

    printf("\nEnter the elements of Matrix A\n");
    for(int i=0; i<x;i++){
    for(int j=0; j<y; j++){
        scanf("%d", &a1[i][j]);
    }
    }

    printf("\nEnter the number of rows of Matrix B: ");
    scanf("%d", &x1);
    printf("Enter the number of columns of Matrix B: ");
    scanf("%d", &y1);

    printf("\nEnter the elements of Matrix B\n");
    for(int i=0; i<x1;i++){
    for(int j=0; j<y1; j++){
        scanf("%d", &a2[i][j]);
    }
    }

    printf("\nThe Matrix A constructed is:\n");
    for(int i=0; i<x; i++){
        for(int j=0; j<y; j++){
            printf("%d ", a1[i][j]);
        }
        printf("\n");
    }

    printf("\nThe Matrix B constructed is:\n");
    for(int i=0; i<x1; i++){
        for(int j=0; j<y1; j++){
            printf("%d ", a2[i][j]);
        }
        printf("\n");
    }

    if(x==x1 && y==y1){
    printf("\nThe Addition of the Matrices A and B results into %dx%d matrix which is:\n", x,y);
    for(int i=0; i<x; i++){
        for(int j=0; j<y; j++){
            sum=a1[i][j]+a2[i][j];
            printf("%d ", sum);
        }
        printf("\n");
    }

    printf("\nThe Subtraction of the Matrices B from A results into %dx%d matrix which is:\n", x,y);
    for(int i=0; i<x; i++){
        for(int j=0; j<y; j++){
            diff=a1[i][j]-a2[i][j];
            printf("%d ", diff);
        }
        printf("\n");
    }
    }

    else{
        printf("\nAddition and Subtraction of two Matrices can only be performed when they have same number of rows and columns.\n");
    }

    if(y==x1){
        int mult=0;
        printf("\nThe Multiplication of Matrix A and B results into %dx%d matrix which is:\n", x,y1);
        for(int i=0;i<x;i++){
        for(int j=0;j<y1;j++){
          for(int k=0;k<y;k++){
            mult+=a1[i][k]*a2[k][j];
          }
          printf("%d ", mult);
          mult=0;
        }
        printf("\n");
        }


    }

    else{
        printf("\nMultiplication of Two Matrices can only be performed when No. of Column or first Matrix is equal to No. of Rows of Second Matrix\n");
    }

    printf("\n\n");

    return 0;
}
