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
    c=a;
    a=b;
    b=c;
    
    /********
    
    
    For Future reference: 
    
    
    The C compiler reads the line from left to right, 
    thus when it encounters the statement "c=a"
    It first reads the value of "a" and then assignes the value to "c"
    and in the next line it takes the value of "b" and assignes to "a" as the statement states that "a=b"
    
    
    Before refining i wrote the statements as 
    a=c
    b=a
    c=b
    
    
    *******/
    
    
    printf("The numbers after swapping are \n%d : %d\n",a,b);
}
