#include <stdio.h>
void odd_even(int num){
    if(num>=0){
        if(num%2==0){
            printf("The number %d is an even number", num);
        }
        else printf("The number %d is an odd number", num);
    }
    else printf("Entered an invalid number");
    
}
int main()
{
    int a;
    printf("Enter the number to check for odd or even : ");
    scanf("%d", &a);
    odd_even(a);
    return 0;
}
