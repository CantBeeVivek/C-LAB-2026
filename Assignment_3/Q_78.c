//PROGRAM TO CHECK WHETHER A CHARACTER IS PRESENT IN STRING OR NOT. 
#include <stdio.h>
int main(){
    char str[100], target;
    int i, flag = 0;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    printf("Enter a character to search: ");   
    scanf("%c", &target);
    for(i = 0; str[i] != '\0'; i++){
        if(str[i] == target){
            flag = 1;
            break;
        }
    }
    if(flag == 1){
        printf("Character %c found in the string.\n", target);
    } else {
        printf("Character %c not found in the string.\n", target);
    }
}