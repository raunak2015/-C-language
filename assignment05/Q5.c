/*Q5. Write a program using a for loop to print the multiplication table of a given number.*/
#include<stdio.h>

int main()
{
    int num;
    printf("Enter a Number: ");
    scanf("%d",&num);
    for (int i = 1; i <= 10; i++)
    {
        printf("%d X %d = %d\n",num, i, i*num);
    }
    return 0;
}