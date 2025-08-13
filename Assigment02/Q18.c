//Q18.Write a program to input a number and print whether it is a 3-digit number or not.
#include<stdio.h>
int main()
{
    int a;
    printf("Enter a Number: ");
    scanf("%d",&a);
    if (a<=999 && a>=100)
    {
        printf("You entered 3 digit number.");
    }
    else
    {
        printf("You not entered 3 digit Number.");
    }
    return 0;
}