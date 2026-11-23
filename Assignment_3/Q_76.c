#include <stdio.h>
//WRITE A PROGRAM TO REVERSE A STRING. (WITHOUT USIN STRING.H FILE) 
int main() {
    char str[100], reversed[100];
    int i, j, length = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    while (str[length] != '\0' && str[length] != '\n') {
        length++;
    }

    for (i = length - 1, j = 0; i >= 0; i--, j++) {
        reversed[j] = str[i];
    }
    reversed[j] = '\0'; 

    printf("Reversed string: %s\n", reversed);
    return 0;
}