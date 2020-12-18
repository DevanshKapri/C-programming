#include <stdio.h>
#include <math.h>

//finding sum of cube of digits

int num, first_dgt, second_dgt, third_dgt, sum;

int main(void)
{
    //getting number input
    printf("Enter three digit no. : ");
    scanf("%d", &num);

    //getting individual digits
    first_dgt = num/100;
    second_dgt = (num % 100) / 10;
    third_dgt = num % 10;

    //sum of cubes
    sum = pow(first_dgt, 3) + pow(second_dgt, 3) + pow(third_dgt, 3);

    printf("Sum of cube of digits = %d \n", sum);
}
