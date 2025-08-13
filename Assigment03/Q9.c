/*Q9.
Write a program to input your monthly salary and calculate yearly salary.
Check if yearly salary is above ₹500,000.*/
#include<stdio.h>

int main()
{
    int salary, Total;
    printf("Enter your monthly salry: ");
    scanf("%d",&salary);
    Total=12*salary;

    if (Total>500000)
    {
        printf("Your salary is grater than 500,000.");
    }
    else
    {
        printf("Your salary is lass than 500,000.");
    }
    return 0;
}