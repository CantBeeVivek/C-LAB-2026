#include <stdio.h>

int main()
{
    printf("-----------------------------------------------------------------------------------------------------------\n");
    printf("PROGRAM TO SWAP TWO VARIABLES USING THIRD VARIABLE \n");
    printf("-----------------------------------------------------------------------------------------------------------\n");
    int a,b,c;
    printf("Enter your first number: ");
    scanf("%d", &a);
    printf("Enter your second number: ");
    scanf("%d", &b);
    
    printf("The numbers you entered before swapping were \n%d : %d\n", a,b);
    a=a+b;
    b=a-b;
    a=a-b;
    
    printf("The numbers after swapping are \n%d : %d\n",a,b);
}
