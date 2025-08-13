//Q30.Write a program to input number of family members and print whether it's a nuclear family (≤ 4) or joint family.
#include<stdio.h>

int main()
{
    int a;
    printf("Enter total number of family members: ");
    scanf("%d",&a);
    if (a<=4)
    {
        printf("nuclear family");
    }
    else
    {
        printf("joint family.");
    }
    return 0;
    
}