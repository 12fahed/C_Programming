#include<stdio.h>
int main()

{
  int slc,ans;
  float s,as,l,b,ar,r,ac,bs,ht,at;

  printf("KHAN FAHED JAVED\nRoll No: 49  DIV: F  Batch: F3\n\n");
  start:
  printf("Select Shape to calculate its area following that:\n1.Square\n2.Rectangle\n3.Circle\n4.Triangle\n\nYour Choosed Shape is: ");
  scanf("%d", &slc);

  if(slc==1){
    printf("So you have selected SQUARE\n\n");
    printf("Enter the side of the Square: ");
    scanf("%f", &s);
    as=s*s;
    printf("Area of the Square with the side %f = %f\n", s, as);
    }

  else if(slc==2){
    printf("So you have selected RECTANGLE\n\n");
    printf("Enter the Length of the Rectangle: ");
    scanf("%f", &l);
    printf("Enter the breadth of the Rectangle: ");
    scanf("%f", &b);
    ar=l*b;
    printf("\nThe area of Rectangle with Length %f and breadth %f = %f\n", l,b,ar);
    }

  else if(slc==3){
      printf("So you have selected CIRCLE\n\n");
      printf("Enter the radius of the Circle: ");
      scanf("%f", &r);
      ac=3.142*r*r;
      printf("Area of the Circle with the radius %f = %f\n", r, ac);
    }

  else if(slc==4){
      printf("So you have selected TRIANGLE\n\n");
      printf("Enter the base of the triangle: ");
      scanf("%f", &bs);
      printf("Enter the height of the triangle: ");
      scanf("%f", &ht);
      at=(bs*ht)/2;
      printf("\nArea of the Triangle with base %f and height %f = %f\n", bs, ht, at);
    }

  else if(slc<=0 || slc>=5){
      printf("\nInvalid Input, Please read the instructions carefully !\n-----STARTING AGAIN-----");
      printf("\n\n");
      goto start;
    }

    start2:
    printf("\nDo you want to calculate area any other shape? (1 for YES and 0 of NO)\nYour Answer: ");
    scanf("%d", &ans);

    if(ans==1){
        printf("\n-----STARTING AGAIN-----\n");
        goto start;
    }

    else if(ans==0){
        printf("-----The program is terminated !-----\n\n");
    }

    else if(ans!=1 || ans!=0){
        printf("\nInvalid Input, Please read the instructions carefully !\n");
        goto start2;
    }

  return 0;
}
