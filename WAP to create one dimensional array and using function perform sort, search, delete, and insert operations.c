#include<stdio.h>

int sort( int a[100], int n){
    printf("\nEntered Array: [ ");
    for(int i=0; i<n; i++){
        printf("%d ", a[i]);
    }
    printf("]");
    printf("\nSorted Array: [ ");
    for(int i=0; i<n; i++){
        for(int j=0; j<n-i-1; j++){
            if(a[j]>a[j+1]){
                int temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    for(int i=0; i<n; i++){
        printf("%d ", a[i]);
    }
    printf("]");
}

int search(int a[100], int n){
    int x,c,index;
    printf("\nEnter the element which has to be Searched: ");
    scanf("%d", &x);
    for(int i=0; i<n; i++){
        if(x==a[i]){
            c=x;
            index=i;
        break;
        }
    }
        if(c==x){
        printf("The Element %d was found at the index position %d", c, index);
        }

        else{
        printf("The element %d is not present in the Array Entered\n");
        }
}

int del(int a[100], int n){
    int x,c,index;
    dee:
    printf("\nEnter the Element which is supposed to be deleted: ");
    scanf("%d", &x);
    for(int i=0; i<n; i++){
        if(x==a[i]){
            c=x;
            index=i;
            break;
        }
    }
        if(c==x){
            printf("The Element %d was found at the index position %d and successfully deleted !", c, index);
        }
        else{
            printf("The element %d is not present in the Array Entered. Try Again\n", x);
            goto dee;
        }


   for(int i=index; i<n; i++){
    a[i]=a[i+1];
   }
   n=n-1;

   printf("\n\nNew array after Deletion is: [ ");
   for(int i=0; i<n; i++){
    printf("%d ", a[i]);
   }
   printf("]");
}


int ins(int a[100], int n){
    int index, ele;
    hee:
    printf("\nEnter the Index less than %d which is to be Inserted: ", n-1);
    scanf("%d", &index);

    if(index>=n){
        printf("Invalid Input! Try again.\n");
        goto hee;
    }

    else{
    for(int i=n; i>=index; i--){
        a[i+1]=a[i];
    }
    printf("Enter the element which is to be Inserted: ");
    scanf("%d", &ele);
    a[index]=ele;
    n=n+1;
    printf("The New array after Insertion is: [ ");
    for(int i=0; i<n; i++){
        printf("%d ", a[i]);
    }
    printf("]");
    }

}

int main(){

    int n, a[100], op, choice;
    printf("KHAN FAHED JAVED\nRoll No: 49  DIV: F  Batch: F3\n\n");
    printf("\nEnter the size of the Array less than 100: ");
    scanf("%d", &n);
    printf("An array of size %d has been created.\n", n);
    printf("\nEnter the elements of the array:\n");
    for(int i=0; i<n; i++){
        scanf("%d", &a[i]);
    }

    printf("\nThe Array of size %d created is: [ ", n);
    for(int i=0; i<n; i++){
        printf("%d ", a[i]);
    }
    printf("]");

    printf("\nEnter the Number of times you want to run the program: ");
    scanf("%d", &choice);

    while(choice--){
    printf("\nEnter the Operation to be performed.\n");
    printf("1. Sort\n");
    printf("2. Search\n");
    printf("3. Delete\n");
    printf("4. Insert\n");
    here:
    scanf("%d", &op);

    switch(op){
    case 1:
        sort(a,n);
        break;
    case 2:
        search(a,n);
        break;
    case 3:
        del(a,n);
        break;
    case 4:
        ins(a,n);
        break;
    default:
        printf("\nInvalid Input, Try Again: ");
        goto here;
    }
    printf("\n");
    }
    printf("\n\n");
    return 0;
}
