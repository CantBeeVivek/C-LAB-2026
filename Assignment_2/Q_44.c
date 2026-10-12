#include <stdio.h>
int main()
{
    int num[10],i,evencount=0,oddcount=0;
    printf("Enter the number of the array\n");
    for (i=0; i<10; i++){
        scanf("%d", &num[i]);
    }
    for(i=0; i<10; i++){
        if(num[i]%2==0){
            evencount++;
        }
        else{
            oddcount++;
        }
    }
    printf("Number of odd number are %d\n", oddcount);
    printf("Number of even numbers are %d", evencount);
}
