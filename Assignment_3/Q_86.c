//ASCII
#include <stdio.h>
int main(){
    char name[200];
    int i;
    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);
    printf("ASCII values of characters in the name:\n");
    for(i=0; name[i]!='\0' && name[i]!='\n'; i++){
        if(name[i]<='z' && name[i]>='a'){
            printf("%c: %d\n", name[i], name[i]);
        }
        else if(name[i]<='Z' && name[i]>='A'){
            printf("%c: %d\n", name[i], name[i]);
        }
        else continue;
    }
    return 0;
}