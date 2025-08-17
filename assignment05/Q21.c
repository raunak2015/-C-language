/*Q21. Write a program using a while loop to print numbers from 1 to a given number entered by the user.*/
#include<stdio.h>

int main()
{
    int i=1, num;
    printf("Enter a Number: ");
    scanf("%d",&num);
    while (i<=num)
    {
        printf("%d\n",i);
        i++;
    }
    
    return 0;
}