#include <stdio.h>
//WRITE A PROGRAM TO COMPARE TWO STRINGS. (WITHOUT USING STRING.H FILE)
int main() {
    char str1[100], str2[100];
    printf("Enter the first string: ");
    fgets(str1, sizeof(str1), stdin);
    printf("Enter the second string: ");
    fgets(str2, sizeof(str2), stdin);
    int i;
    for (i = 0; str1[i] != '\0' && str1[i] != '\n' && str2[i] != '\0' && str2[i] != '\n'; i++) {
        if (str1[i] != str2[i]) {
            printf("Strings are not equal.\n");
            return 0;
        }
    }
    if (str1[i] == '\0' && str2[i] == '\0') {
        printf("Strings are equal.\n");
    } else {
        printf("Strings are not equal.\n");
    }
    return 0;
}