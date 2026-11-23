#include <stdio.h>
#include <string.h>
int main() {
    char str[100], rev[100];
    printf("Enter the string: ");
    fgets(str, sizeof(str), stdin);
    int i,j;
    for(i = strlen(str)-1; i>=0; i--){
        if(str[i] == '\n'){
            str[i] = '\0';
            break;
        }
    }
    for(i = 0, j = strlen(str)-1; str[i] != '\0'; i++, j--){
        rev[j] = str[i];
    }
    rev[strlen(str)] = '\0';
    if(strcmp(str, rev) == 0){
        printf("The string is a palindrome.\n");
    } else {
        printf("The string is not a palindrome.\n");
    }
    return 0;
}