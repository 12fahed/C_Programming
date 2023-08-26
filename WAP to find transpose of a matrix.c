#include<stdio.h>
int main()

{
    int a[100][100], m, n, transpose[100][100];
    printf("Enter the the number of Rows of the Matrix(less than 100): ");
    scanf("%d", &m);
    printf("Enter the the number of Column of the Matrix(less than 100): ");
    scanf("%d", &n);
    printf("A %dx%d matrix is been created.", m,n);
    a[m][n];

    printf("\n\nEnter the elements of the Matrix (filling column wise): ");
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            scanf("%d", &a[i][j]);
        }
    }

    printf("\nThe matrix created is:\n");
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    printf("\nThe Transpose of the Matrix is:\n");
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            transpose[i][j]=a[j][i];
        }
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            printf("%d ", transpose[i][j]);
        }
        printf("\n");
    }
    return 0;

}
