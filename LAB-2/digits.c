#include <stdio.h>

//finding reverse of number

int num, first_dgt, second_dgt, third_dgt;

int main(void)
{
    //getting number input
    printf("Enter three digit no. : ");
    scanf("%d", &num);

    //getting individual digits
    first_dgt = num/100;
    second_dgt = (num % 100) / 10;
    third_dgt = num % 10;

    //reversed number
    printf("Reversed Number = %d\n", (first_dgt + second_dgt * 10 + third_dgt *  100));
}