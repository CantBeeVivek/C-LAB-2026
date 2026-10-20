#include <stdio.h>

int main()
{
    int a,b,c;
    printf("Enter your First number : ");
    scanf("%d", &a);
    printf("\nEnter your Second number : ");
    scanf("%d", &b);
    printf("\nEnter your Third number : ");
    scanf("%d", &c);
    if(a==b && b==c ){
        printf("All three numbers %d, %d, %d are equal", a,b,c);
    }
    else if (a==b ){
        printf ("Two of all the numbers you entered is equal\n");
        if (c>a){
            printf("Also %d is the largest number\n",c);
            printf("And %d is the smallest number", a);
        }
        else {
            printf("Also %d is the smallest number\n", c);
            printf("And %d is the largest number", a);
        }
    }
    else if (a==c ){
        printf ("Two of all the numbers you entered is equal\n");
        if (b>a){
            printf("Also %d is the largest number\n",b);
            printf("And %d is the smallest number", a);
        }
        else {
            printf("Also %d is the smallest number\n", b);
            printf("And %d is the largest number", a);
        }
    }
    else if (c==b ){
        printf ("Two of all the numbers you entered is equal\n");
        if (a>b){
            printf("Also %d is the largest number\n",a);
            printf("And %d is the smallest number",b);
        }
        else {
            printf("Also %d is the smallest number\n", a);
            printf("And %d is the largest number", b);
        }
    }
    else if (a>b){
        if(b>c){
            printf("%d is the largest number",a);
        }
        else if (c>b && c>a){
            printf("%d is the largest number ", c);
        }
        else{
            printf("%d is the largest number ", a);
        }
    }
    else if (b>a){
        if(a>c){
            printf("%d is the largest number",b);
        }
        else if (c>a && c>b){
            printf("%d is the largest number ", c);
        }
        else{
            printf("%d is the largest number ", b);
        }
    }
    else if (c>a){
        if(c>b){
            printf("%d is the largest number",c);
        }
        else if (b>c && b>a){
            printf("%d is the largest number ", b);
        }
        else{
            printf("%d is the largest number ", c);
        }
    }
}
