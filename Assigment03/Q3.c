/*Q3.
Write a program to input three numbers and print the smallest using if-else-if.*/
#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the first value:");
    scanf("%d",&a);
    printf("Enter the second value:");
    scanf("%d",&b);
    printf("Enter the third value:");
    scanf("%d",&c);

    if (a<b && a<c)
    {
        printf("the smallest value is %d",a);
    }
    else if (b<a && b<c)
    {
        printf("the smallest value is %d",b);
    }
    
    else if (c<a && c<b)
    {
        printf("the smallest value is %d",c);
    }
    else
    {
        printf("Wrong Input.");
    }
    
    return 0;
}