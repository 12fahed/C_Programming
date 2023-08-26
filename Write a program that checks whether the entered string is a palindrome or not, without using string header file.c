#include <stdio.h>

int Palindrome(char str[]){
    int len = 0;
    while (str[len] != '\0'){
        len++;
    }

    int start = 0;
    int end = len - 1;

    while (start < end) {
        if (str[start] != str[end]) {
            return 0;
        }
        start++;
        end--;
    }

    return 1;
}

int main(){
    char str[100];

    printf("KHAN FAHED JAVED\nRoll No: 49  DIV: F  Batch: F3\n\n");
    printf("Enter a string: ");
    scanf("%s", str);

    if (Palindrome(str)){
        printf("The string is a palindrome.\n\n");
    } else {
        printf("The string is not a palindrome.\n\n");
    }
    return 0;

}
