#include <stdio.h>

//swapping two values

int a, b, c;

int main(void)
{
    printf("Enter numbers to be swapped: ");
    scanf("%d %d", &a, &b);
    c = a;
    a = b;
    b = c;
    printf("Swapper Numbers: %d %d\n", a, b);
}