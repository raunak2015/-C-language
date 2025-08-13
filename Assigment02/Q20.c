//Q20. Write a program to check if a number is outside the range 10 to 50.
#include<stdio.h>

int main()
{
    int a;
    printf("Enter a number: ");
    scanf("%d",&a);
    if (a<=50 && a>=10)
    {
        printf("You entered a number in range.");
    }
    else
    {
        printf("You entered out of range.");
    }
    return 0;
}