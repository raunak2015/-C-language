/*Q15.
Write a program to input two integers and check if both are divisible by 3.*/
#include <stdio.h>

int main()
{
    int num1, num2;
    printf("Enter the first Number: ");
    scanf("%d", &num1);
    printf("Enter the second Number: ");
    scanf("%d", &num2);

    if (num1 % 3 == 0 && num2 % 3 == 0)
    {
        printf("Both number is divisible bby  3.");
    }
    else
    {
        printf("Both number are not divisible by 3.");
    }

    return 0;
}