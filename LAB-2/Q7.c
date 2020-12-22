#include <stdio.h>

float a, b, c, sum;

//checking validity of triangle. A triangle is valid if sum of angles is 180.

int main(void)
{
    //getting input angles
    printf("Enter three angles of triangle: ");
    scanf("%f %f %f", &a, &b, &c);

    //sum of angles
    sum = a + b + c;

    //conditions to check the angle
    if (sum == 180)
    {
        printf("Valid traingle\n");
        return 0;
    }
    else
    {
        printf("Not a valid triangle\n");
        return 1;
    }
}