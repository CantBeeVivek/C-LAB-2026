#include <stdio.h>
int main()
{
    printf("PROGRAM TO PRINT THE FACTORIAL OF A NUMBER\n");
    int num,fac=1;
    printf("Enter the required number to ontain the factorial of the same: ");
    scanf("%d", &num);
    if(num<0 ){
        printf("You have enter a negative number");
    }
    else{
        for(int i=num; i!=0; i--){
        fac = fac*i;
        }
    printf("The factorial of %d is %d", num,fac);
    }
    

}
