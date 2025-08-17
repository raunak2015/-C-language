//Q3. Write a program to input two numbers and print the smaller one.
#include<stdio.h>

int main()
{
    int a,b;
    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);

    if (a<b)
    {
        printf("first value is smaller than second value.");
    }
    else if (b<a)
    {
        printf("second value is smaller than fiest value.");
    }
    else
    {
        printf("Both value are same.");
    }
    
    
    return 0;
}