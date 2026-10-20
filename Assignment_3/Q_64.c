#include <stdio.h>
// WRITE A FUNCTION THAT WILL GENERATE AND PRINT THE FIRST N FIBONACCI NUMBERS.
void armstrong(int n){
    int a=0,b=1,c;
    printf("%d ", a);
    printf("%d ", b);
    for(int i=0; i<n-2; i++){
        c=a+b;
        printf("%d ", c);
        a=b;
        b=c;
    }
}
int main()
{
    int n;
    printf("Enter the numbers of terms of fibonnaci series you want to print : ");
    scanf("%d", &n);
    armstrong(n);
    return 0;
}
