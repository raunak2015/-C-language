//Q19. Write a program to input speed and check if it is within speed limit (≤ 60).
#include<stdio.h>
int main()
{
    int a;
    printf("Enter your speed: ");
    scanf("%d",&a);
    if (a<=60)
    {
        printf("You are driving with in speed limit.");
    }
    else
    {
        printf("You are doing over speed.");
    }
    return 0;
}