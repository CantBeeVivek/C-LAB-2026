#include <stdio.h>
int main()
{
    int num[100],i,n,max,secmax,count=0;
    printf("Enter the total number of numbers you want to compare\n");
    scanf("%d", &n);
    printf("Enter the numbers\n");
    for (i=0; i<n; i++){
        scanf("%d", &num[i]);
    }
    if(num[0]>num[1]){
        max = num[0];
        secmax = num[1];
    }
    else if(num[0]<num[1]){
        max = num[1];
        secmax = num[0];
    }
    else if (num[0]==num[1]){
        if(n==2){
            goto flag;
        }
        else
        max = num[0];
        secmax = num[0];
    }
    for(i=0; i<n; i++){
        if(num[i]!=num[0]){
            continue;
        }
        else if(num[i]==num[0]){
            count++;
        }
    }
    if (count==n){
        goto flag;
    }
    for(i=2; i<n; i++){
        if(num[i]>=max){
            secmax = max;
            max=num[i];
        }
        else if(num[i]>=secmax){
                secmax=num[i];
        }
    }
    printf("The maximum number is %d\n", max);
    printf("The second maximum number is %d", secmax);
    return 0;
    flag: printf("The all numbers are same");
}
