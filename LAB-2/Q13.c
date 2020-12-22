#include <stdio.h>

float x1, x2, x3, y1, y2, y3, check;

int main(void)
{
    printf("Enter first point (x1, y1): ");
    scanf("%f, %f", &x1, &y1);
    printf("Enter second point (x2, y2): ");
    scanf("%f, %f", &x2, &y2);
    printf("Enter third point (x3, y3): ");
    scanf("%f, %f", &x3, &y3);

    check = x1 * y2 + x2 * y3 + x3 * y1 - x1 * y3 - x3 * y2 - x2 * y1;

    if (check == 0)
    {
        printf("Points lie on same line.\n");
    }
    else
    {
        printf("Not on same line.\n");
    }
}