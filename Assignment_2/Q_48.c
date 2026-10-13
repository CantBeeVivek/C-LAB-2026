#include <stdio.h>
int main()
{
    int num1[10],num2[10],i,temp=0;
    printf("Enter the number of the first array\n");
    for (i=0; i<10; i++){
        scanf("%d", &num1[i]);
    }
    printf("Enter the number of the second array\n");
    for (i=0; i<10; i++){
        scanf("%d", &num2[i]);
    }
    for (i=0; i<10; i++){
        temp = num1[i];
        num1[i] = num2[i];
        num2[i] = temp;
    }
    printf("The numbers of the first array\n");
    for (i=0; i<10; i++){
        printf("%d ", num1[i]);
    }
    printf("\nThe numbers of the second array\n");
    for (i=0; i<10; i++){
        printf("%d ", num2[i]);
    }
}
