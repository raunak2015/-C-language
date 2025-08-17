/*Q12. Write a program using a for loop to calculate the factorial of a given number.*/
#include<stdio.h>

int main()
{
    int num , sum=1;
    printf("Enter a Number: ");
    scanf("%d",&num);

    for (int i = 1; i <= num; i++)
    {
        sum *=i;
    }
    
    printf("The factorial of %d is %d", num, sum);
    return 0;
}