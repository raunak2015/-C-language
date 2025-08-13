//Q21.Write a program to input a number and print whether it is greater than or equal to 100.
#include<stdio.h>

int main()
{
    int a;
    printf("Enter a Number: ");
    scanf("%d",&a);
    if (a>=100)
    {
        printf("You entered number is greater than or equal to 100.");
    }
    else
    {
        printf("You entered number is less than or equal to 100.");
    }
    return 0;
}