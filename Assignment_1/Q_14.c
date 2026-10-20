#include <stdio.h>

int main() {
    char c;
   
    printf("Enter your character : ");
    scanf("%c", &c);
    int i = c;
    if(48<=i&& i<=57){
        printf("It is a number.");}
    
        else if (65<=i && i<=90){
        printf("It is a capital letter.");
    }
        else if (97<=i && i<=122){
        printf("It is a lower case letter.");
    }
        else{
        printf("It is a special character.");
    }
    return 0;
}
