#include<stdio.h>
int main()

{
    int x,y,a1[100][100],sum;
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

    printf("\nThe Matrix A constructed is:\n");
    for(int i=0; i<x; i++){
        for(int j=0; j<y; j++){
            printf("%d ", a1[i][j]);
        }
        printf("\n");
    }

    printf("\nThe Sum of elements of each Row of Matrix A is:\n");
    for(int i=0;i<x;i++){
        int sum=0;
        for(int j=0;j<y;j++){
            sum+=a1[i][j];
        }
        printf("Summation of All elements in Row %d is %d\n", i+1, sum);
    }

    printf("\nThe Sum of elements of each Column of Matrix A is:\n");
    for(int j=0;j<y;j++){
        int sum=0;
        for(int i=0;i<x;i++){
            sum+=a1[i][j];
        }
        printf("Summation of All elements in Column %d is %d\n", j+1, sum);
    }

    printf("\n\n");

    return 0;

}
