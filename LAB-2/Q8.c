#include <stdio.h>

//finding sum of first and last digit of a 4 digit number

int num, a, b;

int main(void)
{
    printf("Enter a 4 digit no. : ");
    scanf("%d", &num);
    a = num / 1000;
    b = num % 10;
    printf("Sum of first and last digit = %d\n", a + b);
}