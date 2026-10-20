#include <stdio.h>
// WRITE A FUNCTION TO CHECK WHETHER A NUMBER IS ARMSTRONG OT NOT. 
void armstrong(int num){
    int r,q=0,v=num,n1=num,b;
    for(int i=0; v!=0; i++){
        r = v%10;
        for(b=1; n1!=0; n1=n1/10){
            b = b*r;
        }
        q = q + b;
        v = v/10;
        n1=num;
    }
    if(q==num){
        printf("The number entered %d is an Armstrong Number", num);
    }
    else printf("The number entered %d is not an Armstrong Number", num);
}
int main()
{
    int a;
    printf("Enter the number to check if the number entered is an Armstrong number or not : ");
    scanf("%d", &a);
    armstrong(a);
    return 0;
}
