/*Q7. Write a program using a for loop to print the sum of numbers from 1 to 50.*/

#include<stdio.h>

int main()
{
    int sum = 0;
    for (int i = 0; i <= 50; i++)
    {
        sum +=i;
    }
    printf("The sum of number from 1 to 50 is %d", sum);
    
    return 0;
}