#include<stdio.h>
#include<string.h>

struct student{
   char name[50];
   int roll, p, c, m, t;
};

int main(){
   struct student s;
   printf("KHAN FAHED JAVED\nRoll No: 49  DIV: F  Batch: F3\n\n");
   printf("Enter the name of the Student: ");
   scanf("%s", s.name);
   printf("\nEnter the Roll No. of the Student: ");
   scanf("%d", &s.roll);
   printf("Enter Marks for Physics: ");
   scanf("%d",&s.p);
   printf("Enter Marks for Chemistry: ");
   scanf("%d",&s.c);
   printf("Enter Marks for Maths: ");
   scanf("%d",&s.m);

   s.t = s.p+s.c+s.m;
   printf("\n------------------------------------------------------------------------------------------");
   printf("\nName\t\tRoll No\t\tPhysics\t\tChemistry\tMaths\t\tTotal Marks");
   printf("\n------------------------------------------------------------------------------------------");
   printf("\n%s\t\t%d\t\t%d\t\t%d\t\t%d\t\t%d", s.name,s.roll,s.p,s.c,s.m,s.t);
   printf("\n------------------------------------------------------------------------------------------");
   printf("\n\n");
   return 0;
}
