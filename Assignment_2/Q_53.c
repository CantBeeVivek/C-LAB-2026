#include <stdio.h>
int main()
{
    int mat[3][3],i,j,sum[3]={0,0,0};
    printf("Enter the numbers of the array\n");
    for (i=0; i<3; i++){
        for(j=0; j<3; j++){
            scanf("%d", &mat[i][j]);
        }
        printf("\n");
    }
    for (i=0; i<3; i++){
        for(j=0; j<3; j++){
            sum[i] = sum[i] + mat[i][j];  
        }
        printf("Sum of the element in the row %d is %d\n", i+1,sum[i]);
    }
}
