//Q2. Write a program to check if a number is divisible by 4.
#include<stdio.h>

int main()
{
    int a;
    printf("Enter a Number: ");
    scanf("%d", &a);

    if (a%4==0)
    {
        printf("The Number is divisible by 4.");
    }
    else
    {
        printf("The Number is not divisible by 4.");
    }
    return 0;
}