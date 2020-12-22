#include <stdio.h>

//converting inches to cm.

int main(void)
{
    float inch = 0;
    printf("Enter distance in inches: ");
    scanf("%f", &inch);
    printf("Distance in cm = %.2f\n", inch * 2.54);
}