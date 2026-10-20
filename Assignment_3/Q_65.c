#include <stdio.h>
//  WRITE A FUNCTION THAT RETURN 1 IF ITS ARGUMENT IS PRIME NUMBER AND RETURN ZERO OTHERWISE. 
int is_prime(int n){
    int flag=1;
    for(int i=2; i<n; i++){
        if(n%i==0){
            flag = 0;
            break;
        }
    }
    return flag;
}
int main()
{
    int n;
    printf("Enter the number to check for prime or not prime : ");
    scanf("%d", &n);
    if(is_prime(n)){
        printf("The number %d is a prime number \n", n);
    }
    else printf("The number %d is not a prime number \n", n);
    return 0;
}
