#include <stdio.h>
void palindrome(int num){
    int r,q,v=num;
    for(int i=0; v!=0; i++){
        r = v%10;
        q = q*10 + r;
        v = v/10;
    }
    if(q==num){
        printf("The number entered %d is a palindrome", num);
    }
    else printf("The number entered %d is not a palindrome", num);
    
}
int main()
{
    int a;
    printf("Enter the number to check if the number entered is a palindrome or not : ");
    scanf("%d", &a);
    palindrome(a);
    return 0;
}
