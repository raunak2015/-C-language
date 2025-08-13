//Q1. Write a program to input an integer and print whether it is zero or non-zero.
#include<stdio.h>

int main()
{
    int a;
    printf("Enter a Number: ");
    scanf("%d", &a);

    if (a==0)
    {
        printf("The value of number is Zero.");
    }
    else
    {
        printf("The value of number is not Zero.");
    }
    
    return 0;
}