#include<stdio.h>
#include<string.h>

struct employee
{
    char name[50];
    char id[50];
    int salary;
};

void sortemployees(struct employee employees[], int n) {
    int i, j;
    struct employee temp;

    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (strcmp(employees[j].id, employees[j+1].id) > 0) {
                // Swap the employees if they are out of order based on ID
                temp = employees[j];
                employees[j] = employees[j+1];
                employees[j+1] = temp;
            }
        }
    }
}

int main()
{
    struct employee e[50];
    int n,i,j;

    printf("Enter No. of Employee(s): ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
 {
    printf("\nEmployee %d", i+1);
    printf("\nEnter Name: ");
    scanf("%s",e[i].name);
    printf("Enter ID (in AB123 Format Only): ");
    scanf("%s",e[i].id);
    printf("Enter Salary: ");
    scanf("%d",&e[i].salary);
 }

    sortemployees(e,n);

    printf("\nEMPLOYEE'S DETAILS\n");
    printf("--------------------------------------------\n");
    printf("Name\tID\t\tSalay\n");
    printf("--------------------------------------------\n");
    for(i=0;i<n;i++){
      printf("%s\t\t",e[i].name);
      printf("%s\t\t",e[i].id);
      printf("%d\n",e[i].salary);
    }
return 0;
}
