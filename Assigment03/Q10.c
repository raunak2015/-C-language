/*Q10.
Write a program to input an integer and check if it is within the range 100 to 200.*/
#include<stdio.h>

int main()
{
    int a;
    printf("enter a number:");
    scanf("%d",&a);

    if (a>100 && a<200)
    {
        printf("The number between 100 and 200.");  
    }
    else
    {
        printf("The number is not in range.");
    }
    return 0;
}