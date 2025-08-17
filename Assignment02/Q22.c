//Q22. Write a program to input the number of hours worked and print “Overtime” if > 40 hours
#include<stdio.h>

int main()
{
    int a;
    printf("Enter your worked Houres: ");
    scanf("%d",&a);
    if (a>40)
    {
        printf("You worked Overtime.");
    }
    else
    {
        printf("you worked in time limit.");
    }
    return 0;
}