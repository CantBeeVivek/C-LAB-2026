
#include <stdio.h>
#include <math.h>
int main()
{
    float a,b,c,s,area;
    printf("PROGRAM TO CALCULATE AREA OF A TRIANGLE.\n");
    printf("Enter the length of first side: ");
    scanf(" %f", &a);
    printf("Enter the length of second side: ");
    scanf(" %f", &b);
    printf("Enter the length of third side: ");
    scanf(" %f", &c);
    s=(a+b+c)/2.0;
    area=s*(s-a)*(s-b)*(s-c);
	float are=sqrt(area);
    printf("The area of the triangle is  : %.3f",are);
}
