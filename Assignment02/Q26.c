//Q26.Write a program to input the cost price and selling price of an item and print if it is a profit or loss.
#include<stdio.h>

int main()
{
    int a,b;
    printf("Enter purchasing price:");
    scanf("%d",&a);
    printf("Enter Selling price:");
    scanf("%d",&b);
    int c = b-a;
    if (c>0)
    {
        printf("You make profit of %d",c);
    }
    else if (c<0)
    {
        printf("you make loss of %d",c);
    }
    else
    {
        printf("You did not make profit or loss.");
    }
    
    
    return 0;
}