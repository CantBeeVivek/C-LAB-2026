#include <stdio.h>
int main()
{
    int max,a,b,c;
    printf("Enter your First number : ");
    scanf("%d", &a);
    printf("\nEnter your Second number : ");
    scanf("%d", &b);
    printf("\nEnter your Third number : ");
    scanf("%d", &c);
    if(a==b || b==c ){
        printf("\nSome of the numbers are equal");
    }
    else {
        max=a>b?(a>c?a:c):(b>c?b:c);
        printf("\nThe largest number is %d", max);
    }
}
