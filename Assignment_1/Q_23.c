#include <stdio.h>
int main()
{
    printf("PROGRAM TO FIND THE POWER OF ONE NUMBER ACCORDING TO THE OTHER NUMBER\n");
    int num,pow,num2=1;
    double num3;
    printf("Enter the number : ");
    scanf("%d", &num);
    printf("Enter the power : ");
    scanf("%d", &pow);

    if(pow>0){
        for(int i=pow; i!=0; i--){
            num2=num*num2;
        }
        printf("Your output number would be %d", num2);
    }
    else if(pow<0){
        for(int i=(-1)*pow; i!=0; i--){
            num2=num*num2;
        }
            num3=1.0/(num2);
        printf("Your output number would be %.5lf", num3);
    }
    else if(pow==0){
        printf("Your output number would be %d", num2);
    }
    

    
    

}
