#include <stdio.h>
int main(){
    char str[100],original,target;
    int i;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    printf("Enter the character to be replaced: ");
    scanf("%c", &original);
    printf("Enter the character to replace with: ");
    scanf(" %c", &target);
    for(i=0; str[i]!='\0' && str[i]!='\n'; i++){
        if(str[i]==original){
            str[i]=target;
        }
    }
    printf("Modified string: %s", str);
    return 0;
}