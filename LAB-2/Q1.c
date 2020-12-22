#include <stdio.h>
#include <math.h>

//calculating interest on amt 5 lakhs fpr 10 years at interest 3.5% per year
//formula used => A = P(1 + r/n)^tn


double P = 500000;
double r = 3.5;
double t = 10;

int main(void)
{
    double annually = pow((P * (1 + r)), t);
    double semiannually = pow((P * (1 + r / 2)), (2 * t));
    double quaterly= pow((P * (1 + r / 4)), (4 * t));
    double monthly = pow((P * (1 + r / 12)), (12 * t));
    double daily = pow((P * (1 + r / 365)), (365 * t));

    printf("Annually = %.2f \n", annually);
    printf("Semi-annually = %.2f \n", semiannually);
    printf("Quaterly = %.2f \n", quaterly);
    printf("Monthly = %.2f \n", monthly);
    printf("Daily = %.2f \n", daily);
}