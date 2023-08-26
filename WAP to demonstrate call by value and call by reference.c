# include <stdio.h>
int swapv (int x,int y) ;
int swapr (int *,int *) ;
int main()
{
   int a, b;
   printf("KHAN FAHED JAVED\nRoll No: 49  DIV: F  Batch: F3\n\n");
   printf("Enter the Values of a: ");
   scanf("%d", &a);
   printf("Enter the Values of b: ");
   scanf("%d", &b);
   printf ("\nOriginal Values\na = %d b = %d\n",a,b);
   swapv(a,b);
   swapr(&a,&b);
   printf("\nSwapped using Call by reference\na = %d b = %d\n", a,b);

return 0;

}

int swapv ( int x,int y)
{
   int t;
   t=x;
   x=y;
   y=t;
   printf("\nSwapped using Call by Value\nx = %d y = %d\n", x,y );
}

int swapr (int *x,int *y )
{
   int t;
   t=*x;
   *x=*y;
   *y=t;
}
