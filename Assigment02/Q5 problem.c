//Q5. Write a program to check if a number is positive and less than 100.
#include<stdio.h>

int main()
{
    int a;
    printf("Enter a Number: ");
    scanf("%d", &a);

    if (a>=0)
    {
        if (a<=100)
        {
            printf("The value of number is positive and less than 100.");
        }
        else
        {
            printf("you entered more than 100.");
        }
        
    }
    else
    {
        printf("The value of number is not positive and less than 100.");
    }
    return 0;
}