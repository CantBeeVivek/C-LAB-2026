#include <stdio.h>
int main()
{
    float C,F;
    printf("Enter the temperature in fahrenheit: ");
    scanf(" %f", &F);
    C = ((5.0/9.0)*(F-212.0))+100.0;
    printf("The given temperature in Celsius is %.3f",C);
    
}
