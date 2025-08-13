/*Q12.
Write a program to input the side of a square and print its area. If area > 100, print "Large Square", else "Small Square".*/
#include<stdio.h>

int main()
{
    float a, area;
    printf("Enter the side of square: ");
    scanf("%f",&a);
     area=a*a;
     printf("The area of squre is %.2f",area);
     if (area>100)
     {
        printf("Leage Square.");
     }
     else
     {
        printf("Small Square.");
     }
     
    return 0;
}