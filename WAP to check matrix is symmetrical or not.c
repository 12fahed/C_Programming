#include<stdio.h>
int main()

{
    int a[100][100], m, flag=1;
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

    for(int i=0; i<m; i++){
        for(int j=0; j<m; j++){
        if(a[i][j]!=a[j][i]){
            flag=0;
            break;
        }
    }
        if(flag==0){
            break;
        }
        }


    if(flag==1){
        printf("The Matrix is Symmetric.");
    }

    else if(flag==0){
        printf("The matrix is not symmetric.");
    }

    printf("\n\n");
    return 0;

}
