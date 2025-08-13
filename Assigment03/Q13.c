/*Q13.
Write a program to input your marks in 5 subjects and calculate percentage.
Use if-else-if to print grades:

A for ≥ 80%
B for ≥ 60%
C for ≥ 40%
F for < 40%*/
#include<stdio.h>

int main()
{
    int m,s,ss,h,e,total;
    float per;
    printf("Enter Math subject Marks: ");
    scanf("%d",&m);
    printf("Enter science subject Marks: ");
    scanf("%d",&s);
    printf("Enter S.S subject Marks: ");
    scanf("%d",&ss);
    printf("Enter Hindi subject Marks: ");
    scanf("%d",&h);
    printf("Enter English subject Marks: ");
    scanf("%d",&e);
    if (m>100 || m<0 ||s>100 || s<0 ||ss>100 || ss<0 ||h>100 || h<0 ||e>100 || e<0 )
    {
       printf("Enter the valid Marks!!");
    }
    
    total=m+s+ss+h+e;
    per=(total)/5;
    printf("Your Persent is %.2f",per);
    if (per>=80)
    {
        printf("Grade = A");
    }
    else if (per>=60)
    {
        printf("Grade = B");
    }
    else if (per>40)
    {
        printf("Grede = C");
    }
    else if (per <40)
    {
        printf("Grade = F ");
    }
    
    
    
    



    return 0;
}