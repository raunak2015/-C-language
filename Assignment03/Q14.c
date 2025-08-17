/*Q14.
Write a program to input a year and check if it is a leap year or not.*/
#include<stdio.h>

int main()
{
    int year;
    printf("Enter  year: ");
    scanf("%d",&year);
    if (year%4==0 && year%100!=0 || year%400==0 )
    {
        printf("This is Leap Year.");
    }
    else
    {
        printf("This is not leap Year.");
    }
    
    return 0;
}