//Q2. Write a program to input your temperature in Celsius and check if it is fever (≥ 37.5).
#include<stdio.h>

int main()
{
    float a;
    printf("Enter your temperature in Celsius: ");
    scanf("%f",&a);
    if (a>=37.5)
    {
        printf("you have fever.");
    }
    else
    {
        printf("You have not fever.");
    }
    
    return 0;
}