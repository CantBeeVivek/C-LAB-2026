#include <stdio.h>
int main()
{
    int num1[10],num2[10],i,sum[10];
    printf("Enter the number of the first array\n");
    for (i=0; i<10; i++){
        scanf("%d", &num1[i]);
    }
    printf("Enter the number of the second array\n");
    for (i=0; i<10; i++){
        scanf("%d", &num2[i]);
    }
    for (i=0; i<10; i++){
        sum[i] = num1[i] + num2[i];
    }
    printf("The sum of numbers in the array are : \n");
    for(i=0; i<10; i++){
        printf("%d  ", sum[i]);
    }
}
