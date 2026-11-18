#include <stdio.h>
#include <string.h>
//PROGRAM TO FIND LENGTH, COPY, CONCATINATE, COMPARE, REVERSE OF STRING USING PRE-DEFINED FUNCTION. 
int main() {
    char str1[100], str2[100], str3[200];
    int length;
    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);
    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);

    length = strlen(str1) - 1; 
    printf("Length of first string: %d\n", length);

    strcpy(str3, str1);
    printf("Copied string: %s", str3);

    strcat(str3, str2);
    printf("Concatenated string: %s", str3);

    if (strcmp(str1, str2) == 0) {
        printf("The strings are equal.\n");
    } else {
        printf("The strings are not equal.\n");
    }

    int i, j;
    char temp;
    for (i = 0, j = strlen(str1) - 2; i < j; i++, j--) { 
        temp = str1[i];
        str1[i] = str1[j];
        str1[j] = temp;
    }
    printf("Reversed first string: %s", str1);

    return 0;
}
