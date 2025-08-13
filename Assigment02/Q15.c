//Q15.Write a program to input age and print if the person is a senior citizen (age ≥ 60)
#include<stdio.h>

int main()
{
    int a;
    printf("Enter your age: ");
    scanf("%d",&a);
    if (a>=60)
    {
        printf("You are Senior citizen.");
    }
    else
    {
        printf("You are not Senior citizen.");
    }
    
    return 0;
}