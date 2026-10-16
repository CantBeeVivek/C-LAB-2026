#include <stdio.h>
int main()
{
    int num[100],i,n,search,flag=0,count=0;
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
            count++;
        }
    }
    if(flag){
        printf("\nThe searched number %d has occured %d times \n", search, count);
    }
    else{
        printf("The searched number is not in array");
    }
}
