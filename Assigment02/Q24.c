//Q24. Write a program to input your monthly income and check if it is above ₹25,000 or not.
#include<stdio.h>

int main()
{
    int a;
    printf("Enter your monthly income ");
    scanf("%d",&a);
    if (a>=25000)
    {
        printf("You income is grater than 25000.");
    }
    else
    {
        printf("You income is lass than 25000.");
    }
    return 0;
}