//Q28.Write a program to input your age, and print if you are eligible for senior discount (≥ 60).
#include<stdio.h>

int main()
{
    int a;
    printf("Enter your age: ");
    scanf("%d",&a);
    if (a>=60)
    {
        printf("You are eligible for Senior citizen discount.");
    }
    else
    {
        printf("You are not eligible Senior citizen discount.");
    }
    
    return 0;
}