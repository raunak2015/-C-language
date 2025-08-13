//Q17. Write a program to input marks and print if the grade is ‘Pass’ (≥33) or ‘Fail’.
#include<stdio.h>

int main()
{
    int a;
    printf("Enter marks ");
    scanf("%d",&a);
    if (a>=33)
    {
        printf("Grade : PASS");
    }
    else
    {
        printf("Grade : Fail");
    }
    return 0;
}