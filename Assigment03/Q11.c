/*Q11.
Write a program to input two integers and check whether their sum is even or odd.*/
#include<stdio.h>

int main()
{
    int num1, num2, total;
    printf("Enter The first number: ");
    scanf("%d",&num1);
    printf("Enter The second number: ");
    scanf("%d",&num2);
    total=num1+num2;

    if (total%2==0)
    {
        printf("The sum of two number is even.");       
    }
    else
    {
        printf("The sum of two number is odd.");
    }
    return 0;
}