#include <stdio.h>

int main() {
    float basic_salary;
    float medical_per, home_per;
    float medical, home;
    float gross_salary;
    
    printf("Enter Basic Salary: ");
    scanf("%f", &basic_salary);

    printf("Enter Medical allowance percentage (e.g., 40 for 40%): ");
    scanf("%f", &medical_per);

    printf("Enter HRA percentage (e.g., 20 for 20%): ");
    scanf("%f", &home_per);
    
    medical = basic_salary * (medical_per / 100.0);
    home = basic_salary * (home_per / 100.0);

    gross_salary = basic_salary + medical + home;

    printf("Your Basic Salary : %.2f\n", basic_salary);
    printf("Your Home allowance : %.2f\n", home);
    printf("Your medical allowance : %.2f\n", medical);
    printf("Gross Salary : %.2f\n", gross_salary);

    return 0;
}


