#include <stdio.h>
int main()
{
    int num[10],i,sum=0;
    printf("Enter the number of the array\n");
    for (i=0; i<10; i++){
        scanf("%d", &num[i]);
    }
    printf("The sum of numbers in the array are : \n");
    for(i=0; i<10; i++){
        sum = sum + num[i];
    }
    printf("%d", sum);
}
