#include <stdio.h>
//PROGRAM TO COUNT TOTAL CHARACTER AND WORDS IN STRING.
int main(){
    char str[1000];
    int space=0, characters=0;
    printf("Enter the line of string");
    fgets(str, sizeof(str), stdin);
    for(int i=0; str[i]!='\0'&& str[i]!='\n'; i++){
        if(str[i]==' '){
            space++;
        }
        characters++;
    }
    printf("There are %d words and %d characters in the string\n",space+1,characters);
}