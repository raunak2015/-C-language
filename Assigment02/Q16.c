//Q16. Write a program to input a year and check if it is before or after 2000.
#include<stdio.h>

int main()
{
    int a;
    printf("Enter a year: ");
    scanf("%d",&a);
    if (a>=2000)
    {
        printf("You entered after 2000.");
    }
    else
    {
        printf("You entered befor 2000.");
    }
    return 0;
}