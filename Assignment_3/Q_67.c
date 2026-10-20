#include <stdio.h>
// WRITE A FUNCTION TO READ AN ARRAY AND FOUND OUT MAXIMUM.  
void max(int a[100],int n){
    int max_val,k;
    max_val = a[0];
    for(int i=1; i<n; i++){
        if(a[i]>max_val){
            max_val = a[i];
            k=i;
        }
    }
    printf("The element with the maximun value in the array is %d", a[k]);
}
int main()
{
    int arr[100],n;
    printf("Enter the size of the array : ");
    scanf("%d", &n);
    printf("\nEnter the elements of the array\n");
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    max(arr,n);
    return 0;
}
