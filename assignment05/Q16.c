/*Q16. Write a program using a while loop to calculate the sum of numbers from 1 to 50.*/

#include<stdio.h>

int main()
{
    int i=1, sum=0;
    while (i<=50)
    {
        sum += i;
        i++;
    }
    printf("The sum of number from 1 to 50 is %d",sum);
    
    return 0;
}