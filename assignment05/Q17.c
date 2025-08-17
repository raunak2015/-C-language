/*Q17. Write a program using a while loop to print numbers in reverse from 10 to 1.*/
#include<stdio.h>

int main()
{
    int i=10;
    while (i>=1)
    {
        printf("%d\n",i);
        i--;
    }
    
    return 0;
}