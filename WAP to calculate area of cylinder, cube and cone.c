#include<stdio.h>
#include<math.h>
int main()

{
  int slc,ans;
  float rb,hc,csac,tsac, sc, vsac, tsacube, rbc, hcone, l, csacone, tsacone;


  printf("KHAN FAHED JAVED\nRoll No: 49  DIV: F  Batch: F3\n\n");
  start:
  printf("Select Shape to calculate its area following that:\n1.Cylinder\n2.Cube\n3.Cone\n\nYour Chosen Shape is: ");
  scanf("%d", &slc);

  if(slc==1){
    printf("So you have selected CYLINDER\n\n");
    printf("Enter the Radius of the base of Cylinder: ");
    scanf("%f", &rb);
    printf("Enter the Height of the Cylinder: ");
    scanf("%f", &hc);
    csac=2*3.142*rb*hc;
    printf("\nCurved Surface are of the Cylinder is = %.2f\n", csac);
    tsac=2*3.142*rb*(rb+hc);
    printf("Total Surface Area of the Cylinder is = %.2f\n\n", tsac);
    }

    else if(slc==2){
    printf("So you have selected CUBE\n\n");
    printf("Enter the Side of the Cube: ");
    scanf("%f", &sc);
    vsac=4*sc*sc;
    printf("\nVertical Surface Area of Cube with Side %.2f is = %.2f\n", sc, vsac);
    tsacube=6*sc*sc;
    printf("Total Surface Area of the Cube with Side %.2f is = %.2f\n\n", sc, tsacube);
    }

    else if(slc==3){
      printf("So you have selected CONE\n\n");
      printf("Enter the Radius of the Base of the Cone: ");
      scanf("%f", &rbc);
      printf("Enter the Height of the Cone: ");
      scanf("%f", &hcone);
      l=sqrt((rbc*rbc)+(hcone*hcone));
      csacone=3.142*rbc*l;
      tsacone=3.142*rbc*(rbc+l);
      printf("\nCurved Surface area of the Cone = %f\n", csacone);
      printf("Total Surface area of the Cone = %f\n", tsacone);
    }

    else if(slc<=0 || slc>=4){
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
        printf("-----The program is terminated-----\n\n");
    }

    else if(ans!=1 || ans!=0){
        printf("\nInvalid Input, Please read the instructions carefully !\n");
        goto start2;
    }

  return 0;
}
