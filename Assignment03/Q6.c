// Q6.Write a program to input two numbers and check if first is divisible by second.
#include <stdio.h>

int main()
{
    int a, b;
    printf("Enter the first value: ");
    scanf("%d", &a);
    printf("Enter the Second value: ");
    scanf("%d", &b);

    if (a%b==0)
    {
        printf("First number is divisible by second");
    }
    else
    {
        printf("First number is not divisible by second");
    }
    
    return 0;
}