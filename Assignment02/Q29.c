//Q29.Write a program to input 2 test marks and check if both are passed (≥ 40).
#include<stdio.h>

int main()
{
    int a,b;
    printf("Enter your first test marks: ");
    scanf("%d",&a);
    printf("Enter your second test marks: ");
    scanf("%d",&b);
    if (a>40 && b>40)
    {
        printf("Your both test marks are grater than 40.");
    }
    else
    {
        printf("Your both test marks are not grater than 40.");
    }
    return 0;
}