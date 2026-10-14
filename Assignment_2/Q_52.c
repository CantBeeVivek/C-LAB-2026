#include <stdio.h>
int main()
{
    int mat[3][3],min,i,j,max;
    printf("Enter the numbers of the array\n");
    for (i=0; i<3; i++){
        for(j=0; j<3; j++){
            scanf("%d", &mat[i][j]);
        }
        printf("\n");
    }
    min = mat[0][0];
    for (i=0; i<3; i++){
        for(j=0; j<3; j++){
            if(mat[i][j] <= min){
                min = mat[i][j];
            }
        }
    }
    printf("Minimum element of the matrix : %d", min);
    max = mat[0][0];
    for (i=0; i<3; i++){
        for(j=0; j<3; j++){
            if(mat[i][j] >= max){
                max = mat[i][j];
            }
        }
    }
    printf("\nMaximum element of the matrix : %d", max);
}
