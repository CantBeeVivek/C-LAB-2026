#include <stdio.h>
int main()
{
    int num[100],i=0,j=0,n,temp;
    printf("Enter the size of array : ");
    scanf("%d", &n);
    printf("Enter the numbers of the array for bubble sort \n");
    for (i=0; i<n; i++){
        scanf("%d", &num[i]);
    }
    for(i=0; i<n; i++){
        for(j=0; j<(n-i-1); j++){
                if(num[j]>num[j+1]){
                temp = num[j+1];
                num[j+1] = num[j];
                num[j] = temp;
            }
        }
    }
    printf("\nThe final sorted array is : ");
    for(i=0; i<n; i++){
        printf("%d ", num[i]);
    }
}
