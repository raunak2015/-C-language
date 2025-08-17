//Q23. Write a program to input your height in cm and print whether you're tall (height > 170 cm).
#include<stdio.h>

int main()
{
    int a;
    printf("Enter your height in cm: ");
    scanf("%d",&a);
    if (a>170)
    {
        printf("You are tall.");
    }
    else
    {
        printf("You are not tall.");
    }
    return 0;
}