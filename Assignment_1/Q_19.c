#include <stdio.h>
int main()
{
    char c;
    printf("Enter your letter:");
    scanf(" %c", &c);

    if('a'<=c && c>='z'){
        printf("Is a small case letter");
    }
    else {
        printf("Is not a small case letter");
    }
}
