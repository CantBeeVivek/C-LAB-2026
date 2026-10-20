#include <stdio.h>
int main()
{
    printf("PROGRAM TO FIND THE VALUE OF Y\n");
    int x,y,n,cas;
    float y1;
    printf("Enter the value of x : ");
    scanf("%d",&x);
    printf("Enter the vale of n : ");
    scanf("%d", &n);
    if(n>3 || n<1){
        cas=4;
    }
    else{
        cas=n;
    }
    switch(cas){

        case 1: y=1+x;
            printf("The value of Y is %d", y);
            break;
        case 2: 
            y1=y;
            y1=1+x/2.0;
            printf("The value of Y is %.2f", y1);
            break;
        case 3: y=1+(x*x*x);
            printf("The value of Y is %d", y);
            break;
        case 4: y=1+(n*x);
            printf("The value of Y is %d", y);
            break;
    }
}
