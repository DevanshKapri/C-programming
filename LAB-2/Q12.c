#include <stdio.h>

int main(void)
{
    float x, y, a, b;

    printf("Enter x: ");
    scanf("%f", &x);
    printf("Enter y: ");
    scanf("%f", &y);

    a = (x + y) / (x - y);
    b = (x + y) * (x - y);

    printf("(x + y)/(x - y) = %.2f\n", a);
    printf("(x + y)(x - y) = %.2f\n", b);
}