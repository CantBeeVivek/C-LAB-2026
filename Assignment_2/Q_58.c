#include <stdio.h>
int main()
{
    int num[100],i,n,search,flag=0;
    printf("Enter the total number of elements in the array : ");
    scanf("%d", &n);
    printf("\nEnter the numbers of the array\n");
    for (i=0; i<n; i++){
        scanf("%d", &num[i]);
    }
    printf("\nThe entered array is : \n");
    for(i=0; i<n; i++){
        printf("%d  ", num[i]);
    }
    printf("\nEnter the number to linear search : ");
    scanf("%d", &search);
    for(i=0; i<n; i++){
        if(search == num[i]){
            flag=1;
            break;
        }
    }
    if(flag){
        printf("\nThe search number %d is at the index %d and position %d \n", search, i, i+1);
    }
    else{
        printf("The searched number is not in array");
    }
}
