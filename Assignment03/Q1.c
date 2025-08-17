//Q1.Write a program to input two integers and print their difference. Check if the difference is greater than 50.
#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter first number: ");
    scanf("%d",&a);
    printf("Enter second number: ");
    scanf("%d",&b);
    if ((a-b)>50 || (b-a)>50)
    {
        printf("difference is grater than 50. ");
    }
    else
    {
        printf("difference is less than 50.");
    }
    
    return 0;
}