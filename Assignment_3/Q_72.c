#include <stdio.h>
int main()
{
    char str[100];
    printf("Enter the line of text : ");
    fgets(str,sizeof(str),stdin);
    int i=0;
    while(str[i]!='\0' && str[i]!='\n'){
        i++;
    }
    printf("\nThe length of line is %d", i);
}
