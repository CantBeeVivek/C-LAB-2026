#include <stdio.h>
int main()
{
    int num[100],i=0,j=0,n,temp,k,min;
    printf("Enter the size of array : ");
    scanf("%d", &n);
    printf("Enter the numbers of the array for bubble sort \n");
    for (i=0; i<n; i++){
        scanf("%d", &num[i]);
    }
    for(j=0; j<(n-1); j++){
        min = num[j];
        for(i=(j+1); i<n; i++){
            if(num[i]<min){
                min = num[i];
                k=i;
            }
        }
        if(min < num[j]){
            temp = num[k];
            num[k] = num[j];
            num[j] = temp;
        }
        printf("\nArray after every iteration is :\n");
        for(int l=0; l<n; l++){
            printf("%d ", num[l]);
        }
        printf("\n");
    }
    printf("\nThe final sorted array is : ");
    for(i=0; i<n; i++){
        printf("%d ", num[i]);
    }
}
