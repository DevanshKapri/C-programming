#include <stdio.h>

//comparision

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

    sum = first_dgt + second_dgt + third_dgt;
    printf("Sum = %d\n", sum);

    int check = sum / 10;

    if (check == 0)
    {
        printf("Less than 10\n");
    }
    else if (check == 1)
    {
        printf("Equal to 10\n");
    }
    else
    {
        printf("Greater than 10\n");
    }
}