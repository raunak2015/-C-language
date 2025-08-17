/*Q14. Write a program using a while loop to print even numbers from 2 to 20.*/
#include<stdio.h>

int main()
{
    int i=1;
    while (i<=20)
    {
        if (i%2==0)
        {
            printf("%d\n",i);
        }
        i++;
        
    }
    
    return 0;
}