/*Q18. Write a program using a while loop to print all multiples of 7 up to 70.*/
#include<stdio.h>

int main()
{
    int i = 1;
    while (i<=70)
    {
        if (i%7==0)
        {
            printf("%d\n",i);
        }
        i++;
        
    }
    
    return 0;
}