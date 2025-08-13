// Q8.Write a program to input three values representing the sides of a triangle. Determine if the triangle is Equilateral, Isosceles, or Scalene. Also, check if the sides can form a valid triangle.
#include <stdio.h>

int main()
{
    float a, b, c;
    printf("Enter the first side of triangle:");
    scanf("%f", &a);
    printf("Enter the Second side of triangle:");
    scanf("%f", &b);
    printf("Enter the Third side of triangle:");
    scanf("%f", &c);

    if (a + b > c && b + c > a && a + c > b)
    {
        printf("This valid triangle.\n");
        if (a == b && a == c && b == c)
        {
            printf("This is Equilateral triangle.");
        }
        else if (a == b || b == c || a == c)
        {
            printf("This is Isosceles triangle.");
        }
        else if (a != b && a != c)
        {
            printf("This is Scalene triangle.");
        }
    }
    else
    {
        printf("This is invalid triangle.");
    }

    return 0;
}