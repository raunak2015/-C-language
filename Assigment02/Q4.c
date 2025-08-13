// Q4.Write a program to check whether a number is a multiple of 10.
#include<stdio.h>

int main()
{
    int a;
    printf("Enter a Number: ");
    scanf("%d", &a);

    if (a%10==0)
    {
        printf("The value of number is multiple of 10.");
    }
    else
    {
        printf("The value of number is not muntiple of 10.");
    }
    return 0;
}