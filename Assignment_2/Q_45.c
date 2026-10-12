#include <stdio.h>
int main()
{
    int num[10],i,negcount=0,poscount=0, zerocount=0;
    printf("Enter the integers\n");
    for (i=0; i<10; i++){
        scanf("%d", &num[i]);
    }
    for(i=0; i<10; i++){
        if(num[i]<0){
            negcount++;
        }
        else if(num[i]>0){
            poscount++;
        }
        else if(num[i]==0){
            zerocount++;
        }
    }
    printf("Number of positive integers are %d\n", poscount);
    printf("Number of negative integers are %d\n ", negcount);
    printf("Number of zeroes are %d", zerocount);
}
