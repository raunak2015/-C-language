/*Q3. Write a program using a for loop to print odd numbers from 1 to 19. */
#include<stdio.h>

int main()
{
    for (int i = 1; i <= 20; i++)
    {
        if (i%2==1)
        {
            printf("\n%d",i);
        }
        
    }
    
    return 0;
}