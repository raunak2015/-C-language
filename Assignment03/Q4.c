/*Q4.
Write a program to input your exam marks and:

Print "Excellent" if marks ≥ 90
Print "Good" if marks ≥ 75
Print "Average" if marks ≥ 50
Else print "Fail"
*/
#include<stdio.h>

int main()
{
    int a;
    printf("Enter You Marks: ");
    scanf("%d",&a);

    if (a>=90)
    {
        printf("Excellent");
    }
    else if (a>=75)
    {
        printf("Good");
    }
    else if (a>=50)
    {
        printf("Average");
    }
    else
    {
        printf("fail");
    }
    return 0;
}