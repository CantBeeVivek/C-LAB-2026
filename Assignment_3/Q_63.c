#include <stdio.h>
// WRITE A FUNCTION EXCHANGE TO INTERCHANGE THE VALUE OF TWO VARIALBLE ,SAY X AND Y . 
void interchange(int a,int b){
    a = b+a;
    b = a-b;
    a = a-b;
    printf("\nThe numbers after swapping are %d and %d", a,b);
}
int main()
{
    int a,b;
    printf("Enter the numbers to swap : \n");
    scanf("%d", &a);
    scanf("%d", &b);
    printf("\nThe numbers before swapping are %d and %d", a,b);
    interchange(a,b);
    return 0;
}
