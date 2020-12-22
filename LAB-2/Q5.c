#include <stdio.h>

//degree C to F conversion

float f, out;

int main(void)
{
    printf("Enter temperature in Farenheit: ");
    scanf("%f", &f);
    out = ((f - 32)/9) * 5;
    printf("Celsius = %.2f\n", out);
}