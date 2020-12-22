#include <stdio.h>
#include <math.h>

int main(void)
{
    float g, f, x, y, r, check;
    printf("Enter coordinatesof centre(g,f): ");
    scanf("%f %f", &g, &f);
    printf("Enter radius: ");
    scanf("%f", &r);
    printf("Enter coordinatesof point(x,y): ");
    scanf("%f %f", &x, &y);

    check = sqrt(pow((x - g), 2) + pow((y - f), 2));

    if (check > r)
    {
        printf("Outside the circle\n");
    }
    else if (check < r)
    {
        printf("Inside the circle\n");
    }
    else
    {
        printf("On the circle\n");
    }
}