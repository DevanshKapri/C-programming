#include <stdio.h>
#include <math.h>

int main(void)
{
    float a, b, c, root1, root2;
    printf("Enter coefficients of quadratic equation ax^2 + bx +c: ");
    scanf("%f %f %f", &a ,&b, &c);

    root1 = (-b + sqrt(pow(b, 2) - 4 * a * c)) / 2;
    root2 = (-b - sqrt(pow(b, 2) - 4 * a * c)) / 2;

    printf("Roots are %.2f and %.2f\n", root1, root2);
}