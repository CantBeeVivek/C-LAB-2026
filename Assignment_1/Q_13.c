#include <stdio.h>
#include <math.h>

int main()
{
    printf("------------------------------------------------------------------\n");
    printf("PROGRAM TO CHECK WHETHER A NO. IS ODD OR EVEN \n");
    printf("------------------------------------------------------------------\n");
    float a;
    printf("Enter your number :");
    scanf("%f",&a);
    
    
    // When i missed the "&" symbol before the "a" variable the program was just accepting the value and was not giving an output, (did not store the output)
    
    float f=fmodf(a,2.0);
    
    /* 
    the "fmodf(float x,float y)""  is the format used to find the modulos of a float value which i stored in f
    which we check for the correct type of value entered by the user 
    
    
    */
    
    
    int b = (int)roundf(a);
    
    
    // The above function is round function used by me to change the data type from float to int 
    
     
    
    if (f!=0.0){
        printf("You did not enter a whole number");
        
    }
    else if(b%2==0){
       printf("%d is an Even number",b);}
    else 
    printf("%d is an odd number ",b);
    

    
    
}
