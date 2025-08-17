/*Q5.
Write a program to input your age and check:

"Child" if < 13
"Teen" if 13 to 19
"Adult" if 20 to 59
"Senior" if ≥ 60*/
#include<stdio.h>

int main()
{
    int a;
    printf("Enter You age: ");
    scanf("%d",&a);

    if (a<=13)
    {
        printf("Child");
    }
    else if (a<=19)
    {
        printf("Teen");
    }
    else if (a<=59)
    {
        printf("Adult");
    }
    else
    {
        printf("senior");
    }
    return 0;
}