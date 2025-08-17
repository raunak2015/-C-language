/*Q23. Write a program using a while loop to count down from a given number to 1.*/
#include<stdio.h>

int main()
{
    int num;
    printf("Enter a Number: " );
    scanf("%d",&num);
    int i=num;

    while (i>=1)
    {
        printf("%d\n",i);
        i--;
    }
    
    return 0;
}