/*Q15. Write a program using a while loop to print odd numbers from 1 to 19.*/
#include<stdio.h>

int main()
{
    int i=1;
    while (i<=20)
    {
        if (i%2==1)
        {
            printf("%d\n",i);
        }
        i++;
        
    }
    
    return 0;
}