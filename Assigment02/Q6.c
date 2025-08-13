// Q6. Write a program to input a float and print whether it is greater than 5.5 or not.
#include<stdio.h>

int main()
{
    float a;
    printf("Enter a Number: ");
    scanf("%f", &a);

    if (a>5.5)
    {
        printf("The value of number is grater than 5.5.");
    }
    else
    {
        printf("The value of number is not grater than 5.5.");
    }
    return 0;
}