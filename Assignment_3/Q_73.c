#include <stdio.h>
int main()
{
    char str[100],strc[100];
    printf("Enter the string : ");
    fgets(str,sizeof(str),stdin);
    int i=0;
    char ch;
    while(str[i]!='\0' && str[i]!='\n'){
        ch = str[i];
        str[i] = strc[i];
        strc[i]=ch;
        i++;
    }
    printf("\nThe the copied string is : %s", strc);
}
