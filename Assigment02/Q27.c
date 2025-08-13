//Q27.Write a program to input number of items bought, and if more than 10, print "Bulk Order", else print "small Order".
#include<stdio.h>

int main()
{
    int a;
    printf("Enter number of item you bought: ");
    scanf("%d",&a);
    if (a>10)
    {
        printf("Bulk Order");
    }
    else
    {
        printf("small Order.");
    }
    return 0;
}