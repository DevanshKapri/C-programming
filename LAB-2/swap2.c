#include <stdio.h>

//swapping two numbers without temp variable

int a,b;

int main(void)
{
    printf("Enter a: ");
    scanf("%d", &a);

    printf("Enter b: ");
    scanf("%d", &b);

    a = a + b;
    b = a - b;
    a = a - b;

    printf("a = %d, b = %d\n", a, b);
}