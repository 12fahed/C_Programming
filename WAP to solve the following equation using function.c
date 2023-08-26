#include<stdio.h>
int add( int a[100][100], int b[100][100], int add1[100][100], int x, int y)
{
   int i,j;
   for(i=0;i<x;i++)
   for(j=0;j<y;j++)
   add1[i][j] = a[i][j] + b[i][j];
}

int mult(int c[100][100], int d[100][100], int mult1[100][100], int x, int y1, int y)
{
   int i,j,k;
   for(i=0;i<x;i++)
   for(j=0;j<y1;j++){
    mult1[i][j]=0;
    for(k=0;k<y;k++)
    mult1[i][j]+=c[i][k]*d[k][j];
 }
}

int main()
{
   int ar,ac,br,bc,cr,cc,dr,dc;
   int A[100][100], B[100][100], C[100][100], D[100][100];
   int add1[100][100],mult1[100][100],mult2[100][100],Y[100][100];
   printf("KHAN FAHED JAVED\nRoll No: 49  DIV: F  Batch: F3\n\n");
   printf("Enter the number of rows of Matrix A: ");
   scanf("%d", &ar);
   printf("Enter the number of columns of Matrix A: ");
   scanf("%d", &ac);

   printf("\nEnter the elements of Matrix A\n");
   for(int i=0; i<ar;i++){
   for(int j=0; j<ac; j++){
       scanf("%d", &A[i][j]);
    }
   }

   printf("\nEnter the number of rows of Matrix B: ");
   scanf("%d", &br);
   printf("Enter the number of columns of Matrix B: ");
   scanf("%d", &bc);

   if(ar==br && ac==bc){

   printf("\nEnter the elements of Matrix B\n");
   for(int i=0; i<br;i++){
   for(int j=0; j<bc; j++){
       scanf("%d", &B[i][j]);
    }
   }

   printf("\nEnter the number of rows of Matrix C: ");
   scanf("%d", &cr);
   printf("Enter the number of columns of Matrix C: ");
   scanf("%d", &cc);

   printf("\nEnter the elements of Matrix C\n");
   for(int i=0; i<cr;i++){
   for(int j=0; j<cc; j++){
       scanf("%d", &C[i][j]);
    }
   }

   printf("\nEnter the number of rows of Matrix D: ");
   scanf("%d", &dr);
   printf("Enter the number of columns of Matrix D: ");
   scanf("%d", &dc);

   if(cc==dr){

   printf("\nEnter the elements of Matrix D\n");
   for(int i=0; i<dr;i++){
   for(int j=0; j<dc; j++){
       scanf("%d", &D[i][j]);
    }
   }

   printf("\nThe Matrix A constructed is:\n");
   for(int i=0; i<ar; i++){
   for(int j=0; j<ac; j++){
   printf("%d ", A[i][j]);
    }
        printf("\n");
    }

   printf("\nThe Matrix B constructed is:\n");
   for(int i=0; i<br; i++){
   for(int j=0; j<bc; j++){
   printf("%d ", B[i][j]);
    }
        printf("\n");
    }

   printf("\nThe Matrix C constructed is:\n");
   for(int i=0; i<cr; i++){
   for(int j=0; j<cc; j++){
   printf("%d ", C[i][j]);
    }
        printf("\n");

    }

   printf("\nThe Matrix D constructed is:\n");
   for(int i=0; i<dr; i++){
   for(int j=0; j<dc; j++){
   printf("%d ", D[i][j]);
    }
        printf("\n");
    }

        add(A,B,add1,ar,ac);
        printf("\nA + B = M\n");
        for(int i=0; i<ar; i++){
        for(int j=0; j<ac; j++){
            int add1=A[i][j]+B[i][j];
            printf("%d ", add1);
        }
        printf("\n");
    }


        mult(C,D,mult1,cr,dc,cc);
        printf("\nC x D = N\n");
        for(int i=0;i<cr;i++){
            for(int j=0;j<dc;j++)
                printf("%d ", mult1[i][j]);
                printf("\n");
        }

        if(ac==cr){
            mult(add1,mult1,Y,ar,dc,ac);
            printf("\nM x N = Y\n");
            for(int i=0;i<ar;i++){
            for(int j=0;j<dc;j++)
                printf("%d ", Y[i][j]);
                printf("\n");
        }
        }

        else{
            printf("\nMatrix M and N Cannot be Multiplied as the No. of Column of M is not equal to No. of Rows of N\nMultiplication of Two Matrices can only be performed when No. of Column or first Matrix is equal to No. of Rows of Second Matrix");
        }
    }

    else{
        printf("\nMatrix C and D Cannot be Multiplied as the No. of Column of C is not equal to No. of Rows of D and hence Program id Teminated\nMultiplication of Two Matrices can only be performed when No. of Column or first Matrix is equal to No. of Rows of Second Matrix");
    }

 }

    else{
        printf("\nMatrix A and B Cannot be added as they are unlike Matrices and hence Program is Teminated.\nAddition and Subtraction of two Matrices can only be performed when they have same number of rows and columns.");
    }

    printf("\n\n");

return 0;

}
