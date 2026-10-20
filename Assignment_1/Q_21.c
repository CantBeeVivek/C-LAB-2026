#include <stdio.h>
int main()
{
    int num1, num2, result,opin;
    char op;
    
    printf("Enter an operator (+,-,*,/): ");
    scanf(" %c", &op);
    opin=op;


   
    printf("Enter the first numbers: ");
    scanf("%d", &num1);
    printf("Enter the second numbers: ");
    scanf("%d", &num2);

    
    switch (opin) {
        case 43:
            result = num1 + num2;
            printf("%d + %d = %d\n", num1, num2, result);
            break;

        case 45:
            result = num1 - num2;
            printf("%d - %d = %d\n", num1, num2, result);
            break;

        case 42:
            result = num1 * num2;
            printf("%d * %d = %d\n", num1, num2, result);
            break;

        case 47:
            if (num2 != 0) {
                result = num1 / num2;
                printf("%d / %d = %d\n", num1, num2, result);
            } else {
                printf("Error! Division by zero is not allowed.\n");
            }
            break;
        default:
            printf("Error! Invalid operator entered.\n");
    }

    return 0;

}
