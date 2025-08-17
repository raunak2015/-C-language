// Q7.Write a program to create a simple calculator that performs addition, subtraction, multiplication, and division based on the user's choice.
#include <stdio.h>

int main()
{
    float a, b;
    int c;
    printf("Well-come to simple calulator.\n you can do addition, subtraction, multiplication, and division.");
    printf("\nEnter the First Number: ");
    scanf("%f", &a);
    printf("\nEnter the Second Number: ");
    scanf("%f", &b);
    printf(" For addition press 1;\n For subtraction press 2;\n For multiplication press 3;\n For division press 4;");
    scanf("%d", &c);

    if (c == 1)
    {
        printf("%.2f + %.2f = %.2f", a, b, a + b);
    }
    else if (c == 2)
    {
        printf("%.2f - %.2f = %.2f ", a, b, a - b);
    }
    else if (c == 3)
    {
        printf("%.2f X %.2f  = %.2f", a, b, a * b);
    }
    else if (c == 4)
    {
        printf("%.2f / %.2f = %.2f", a, b, a / b);
    }
    else
    {
        printf("Wrong input!!");
    }
    return 0;
}