#include <stdio.h>
// WRITE A FUNCTION TO READ CHARACTER AND CHECK WHETHER IT IS VOWEL OR NOT. 
int str_len(char *word){
    int i=0,count=0;
    while(word[i]!='\0' && word[i]!='\n'){
        if(word[i]!=' '){
            count++;
        }
        i++;
    }
    return count;
}
int main()
{
    char str[100];
    printf("Enter the line of text : ");
    fgets(str,sizeof(str),stdin);
    printf("\nThe length of line is %d", str_len(str));
}
