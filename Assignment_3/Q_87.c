#include <stdio.h>
#include <string.h>
int main(){
    char str[100][20];
    char temp[20];
    int j;
    printf("Enter the number of strings you want to enter: ");
    scanf("%d", &j);
    printf("Enter the strings:\n");
    for(int i=0; i<j; i++){
        scanf("%s", str[i]);
    }
    for(int i=0; i<j-1; i++){
        for(int k=0; k<j-1-i; k++){
            if(strcmp(str[k], str[k+1])>0){
                strcpy(temp, str[k]);
                strcpy(str[k], str[k+1]);
                strcpy(str[k+1], temp);
            }
        }
    }
    printf("Strings in dictionary order:\n");
    for(int i=0; i<j; i++){
        printf("%s\t", str[i]);
    }
}