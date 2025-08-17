//Q14. Write a program to input a float and convert it to int using (int) cast, then print both.
#include<stdio.h>

int main()
{
    float  a,b;
    printf("Enter the First value : ");
    scanf("%f",&a);
    printf("Enter the second value : ");
    scanf("%f",&b);
    int c = (float)a;
    int d = (float)b;
    printf("a=%d b=%d",c,d);
    return 0;
}