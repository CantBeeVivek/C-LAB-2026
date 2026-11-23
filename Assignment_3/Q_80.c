#include <stdio.h>
int main(){
    char str[100];
    printf("Enter the string to convert to upper case : \n");
    fgets(str, sizeof(str), stdin);
    for(int i=0; str[i] != '\0' && str[i] != '\n'; i++){
        if(str[i]<='z' && str[i]>='a'){
            str[i]=str[i]-32;
        }
    }
    printf("The string in upper case is : \n");
    printf("%s",str);
}