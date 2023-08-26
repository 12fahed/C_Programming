#include<stdio.h>
struct student
{
  int roll_no;
  float phys, chem, maths;
  char name[20];
};

int sortStudents(struct student s[], int n) {
  for (int i = 0; i < n - 1; i++) {
    for (int j = 0; j < n - i - 1; j++) {
      float totalMarks1 = s[j].phys + s[j].chem + s[j].maths;
      float totalMarks2 = s[j + 1].phys + s[j + 1].chem + s[j + 1].maths;

      if (totalMarks1 < totalMarks2) {
        // Swap students
        struct student temp = s[j];
        s[j] = s[j + 1];
        s[j + 1] = temp;
      }
    }
  }
}

int main()
{
  int i, n;
  struct student s[20];
  printf("KHAN FAHED JAVED\nRoll No: 49  DIV: F  Batch: F3\n\n");
  printf("Enter the number of students: ");
  scanf("%d", &n);
  for(int i=0;i<n;i++){

  printf("\nStudent %d:\nEnter the Name of the Student: ", i+1);
  scanf("%s", s[i].name);
  printf("Enter The Roll NO: ");
  scanf("%d", &s[i].roll_no);
  printf("Enter the Marks for Physics: ");
  scanf("%f", &s[i].phys);
  printf("Enter the Marks for Chemistry: ");
  scanf("%f", &s[i].chem);
  printf("Enter the marks for Maths: ");
  scanf("%f", &s[i].maths);
  }

  sortStudents(s, n);

  printf("\n\nMERIT NO\tNAME\t\tROLL NO\t\tPHYSICS MARKS\t\tCHEMISTRY MARKS\t\tMATHS MARKS\t\tTOTAL MARKS\n");
  for(i=0;i<n;i++){
  printf("%d\t\t%s\t\t%d\t\t%f\t\t%f\t\t%f\t\t%f\n",i+1,s[i].name,s[i].roll_no,s[i].phys,s[i].chem,s[i].maths,s[i].phys+s[i].chem+s[i].maths);
}

  printf("\n\n");
return 0;
}
