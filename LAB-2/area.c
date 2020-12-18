#include <stdio.h>
#include <math.h>

#define PI 3.14

//calculating area of rectangle and circle and rectangle

int main(void)
{
    float l, b;
    float radius;

    printf("Enter length and breadth of rectangle: ");
    scanf("%f %f", &l, &b);

    printf("Area of rectangle = %.2f\n", l * b);

    printf("Enter radius of circle: ");
    scanf("%f", &radius);
    printf("Area of circle = %.2f\n", PI * pow(radius,2));
}