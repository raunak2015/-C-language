//Q11. Write a program to input a float and truncate it (i.e., print integer part only).
#include<stdio.h>

int main()
{
    float a;
    printf("Enter The float value: ");
    scanf("%f",&a);
    int b = (float)a;
    printf("%d",b);
    return 0;
}