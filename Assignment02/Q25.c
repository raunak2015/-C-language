//Q25.Write a program to input two subject marks and print whether both are above 50.
#include<stdio.h>

int main()
{
    int a,b;
    printf("Enter your first subject marks: ");
    scanf("%d",&a);
    printf("Enter your second subject marks: ");
    scanf("%d",&b);
    if (a>50 && b>50)
    {
        printf("Your both subject marks are grater than 50.");
    }
    else
    {
        printf("Your both subject marks are not grater than 50.");
    }
    return 0;
}