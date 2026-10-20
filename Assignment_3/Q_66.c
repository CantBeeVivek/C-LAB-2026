#include <stdio.h>
// WRITE A FUNCTION TO CALCULATE (NCR) FACTORIAL OF A GIVEN NUMBERS.                
// NCR = (!N/(!R*!(N-R))); 
int fac(int n){
    int f=1;
    for(int i=1; i<=n; i++){
        f=f*i;
    }
    return f;
}
int main()
{
    int n,r,nCr;
    printf("Enter n : ");
    scanf("%d", &n);
    printf("Enter r : ");
    scanf("%d", &r);
    nCr = fac(n)/(fac(r)*fac(n-r));
    printf("\nThe nCr value is %d ", nCr);
    return 0;
}
