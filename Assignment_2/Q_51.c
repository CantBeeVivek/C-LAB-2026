#include <stdio.h>
int main()
{
    int num[100],i,n,temp;
    printf("Enter the total number of elements in the array : ");
    scanf("%d", &n);
    printf("\nEnter the numbers of the array\n");
    for (i=0; i<n; i++){
        scanf("%d", &num[i]);
    }
    printf("\nThe array before reversal is : \n");
    for(i=0; i<n; i++){
        printf("%d  ", num[i]);
    }
    for(int k=0,j=(n-1); k<=j; k++,j--){
        temp = num[k];
        num[k] = num[j];
        num[j] = temp;
    }
    printf("\nThe reversed array is : \n");
    for(i=0; i<n; i++){
        printf("%d  ", num[i]);
    }
}
