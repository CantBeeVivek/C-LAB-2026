#include <stdio.h>

int main()
{
   int a=0,b=1,c;
   int n,i;
   printf("Enter till how many numbers you want fibonacci sequence till");
   scanf("%d", &n);
   printf("%d\t", a);
   printf("%d", b);
   
   for(i=2; i<n; i++ ){
        c=a+b;
        a=b;
        b=c;
        printf("\t%d", c);
    
   }
   
   
}
