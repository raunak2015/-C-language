/*Q2. Write a program using a for loop to print even numbers from 2 to 20*/
#include<stdio.h>

int main()
{
    for (int i = 2; i <= 20; i++)
    {
        if (i%2==0)
        {
            printf("\n%d",i);
        }
    }
    
    return 0;
}