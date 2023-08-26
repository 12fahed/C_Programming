#include<stdio.h>
#include<math.h>
int main()

{
  int n,c;
  float b;
  printf("KHAN FAHED JAVED\nRoll No: 49  DIV: F  Batch: F3\n\n");
  printf("Enter a 4 digit number: ");
  scanf("%d", &n);

  if(n>=1000 && n<=9999){
  b=sqrt(n);
  printf("The Square root of the Number is =%f\n", b);

  if(n==b*b){
    printf("The Entered Number is a Perfect Square\n\n");
  }

  else{
    printf("The Entered Number is not a perfect Square\n\n");
  }

  }

  else{
    printf("Invalid input! Please give the input of 4 digit Number only\n");
  }

  return 0;
}
