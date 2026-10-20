#include <stdio.h>
int main()
{
    int op,num1, num2, result;

    printf("For Addition enter 1\nFor subtraction enter 2\nFor multiplication enter 3\nFor division enter 4\n");
    printf("Enter an operator : ");
    scanf(" %d", &op);

   
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    
    switch (op) {
        case 1:
            result = num1 + num2;
            printf("%d + %d = %d\n", num1, num2, result);
            break;

        case 2:
            result = num1 - num2;
            printf("%d - %d = %d\n", num1, num2, result);
            break;

        case 3:
            result = num1 * num2;
            printf("%d * %d = %d\n", num1, num2, result);
            break;

        case 4:
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
