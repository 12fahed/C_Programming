#include<stdio.h>
int main()
{
  int i, j, n=4;
  printf("KHAN FAHED JAVED\nRoll No: 49  DIV: F  Batch: F3\n\n");
  for(i=0; i<n; i++)
  {
    for(j=0; j<n-1-i; j++)
       printf(" ");
    for(j=0; j<i; j++)
       printf("* ");
    printf("\n");
  }

  for(i=n-2; i>0; i--)
  {
    for(j=0; j<n-1-i; j++)
       printf(" ");
    for(j=0; j<i; j++)
       printf("* ");
    printf("\n");
  }

  printf("\n\n");
  return 0;

}
