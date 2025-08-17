/*Q19. Write a program using a while loop to calculate the factorial of a given number.*/

#include<stdio.h>

int main()
{
    int i=1, sum =1, num ;
    printf("Enter a Number: ");
    scanf("%d",&num);

    while (i<=num)
    {
        sum *=i;
        i++;
    }
    printf("The factorial of %d is %d",num, sum);
    
    return 0;
}