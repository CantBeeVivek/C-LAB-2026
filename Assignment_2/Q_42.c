#include <stdio.h>
int main()
{
    int count=9;
    for(int i=1; i<=4; i++){
        for(int j=1; j<=4;j++){
            if((i+j)>=5){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        for(int j=5; (j-i)!=4; j++){
            printf("*");
        }
        printf("\n");
    }
    for(int i=5; i<=7; i++){
        for(int j=1; j<=4; j++){
            if((i-j)<=3){
                printf("*");
            }
            else {
                printf(" ");
            }
        }
        for(int j=5; (j+i)<=11; j++){
            printf("*");
        }
        printf("\n");
    }
}
