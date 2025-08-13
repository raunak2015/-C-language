//Q10.Write a program to divide two integers and use type casting to show accurate decimal output.
#include<stdio.h>

int main()
{
    int a;
    float b;
    printf("Enter tha first number: ");
    scanf("%d",&a);
    printf("Enter tha second number: ");
    scanf("%d",&b);
    float c=a/b;

    printf("%.2f",c);
    
    return 0;
}