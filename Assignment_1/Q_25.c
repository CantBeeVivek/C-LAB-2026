#include <stdio.h>
int main()
{
    printf("PROGRAM TO PRINT THE TABLE OF A NUMBER\n");
    int num,i;
    printf("Enter the number for the corresponding table : ");
    scanf("%d", &num);
    for(i=1; i<=10 ; i++){
        printf("%d x %d = %d\n",num,i,num*i);
    }
    
}
