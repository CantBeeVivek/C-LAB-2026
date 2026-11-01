#include <stdio.h>
// WRITE A FUNCTION TO READ CHARACTER AND CHECK WHETHER IT IS VOWEL OR NOT. 
int is_vowel(char a){
    int flag=0;
    if( a=='a' || a=='e' || a=='i' || a=='o' || a=='u' || a=='A' || a=='E' || a=='I' || a=='O' || a=='U' ){
        flag=1;
    }
    return flag;
}
int main()
{
    char a;
    printf("Enter the character to check for vowel or not : ");
    scanf("%c",&a);
    if(is_vowel(a)){
        printf("The character entered is a vowel");
    }
    else {
        printf("The character entered is a consonant");
    }
}
