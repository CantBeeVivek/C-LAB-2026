//PROGRAM TO READ A STRING AND ARRANGE ALL THE CHARATERS AS THEY APPEAR IN DICTIONARY.
#include <stdio.h>
#include <string.h>
int main() {
    char str[100];
    printf("Enter the string: ");
    fgets(str, sizeof(str), stdin);
    for(int i =0; i<strlen(str)-1; i++){
        for(int j=0; j<strlen(str)-1-i; j++){
            if(str[j]>str[j+1] && str[j]!=' '){
                char temp = str[j];
                str[j] = str[j+1];
                str[j+1] = temp;
            }
        }
    }
    printf("The string arranged in dictionary order is: %s", str);
}