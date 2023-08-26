#include <stdio.h>
#include <string.h>

int main(){

    char str[100];
    int i, len, vowel_count=0;
    printf("KHAN FAHED JAVED\nRoll No: 49  DIV: F  Batch: F3\n\n");
    printf("Enter a string: ");
    //fgets(str, sizeof(str), stdin);
    gets(str);
    len=strlen(str);

    for(i=0; i<len; i++){
        if(str[i]=='A' || str[i]=='a' || str[i]=='E' || str[i]=='e' || str[i]=='I' || str[i]=='i' || str[i]=='O' || str[i]=='o' || str[i]=='U' || str[i]=='u')
            vowel_count++;
    }

    printf("Number of vowels: %d\n", vowel_count);

return 0;

}
