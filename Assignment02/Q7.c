// Q7. Write a program to check whether a single digit integer is even or odd.
 #include<stdio.h>
 
 int main()
 {
    int a;
    printf("Enter a Number between 0 to 9 : ");
    scanf("%d", &a);

    if (a<0 || a>9)
    {
        printf("Enter vailid number.");
    }
    else if(a%2==0)
    {
        printf("The number is single digit and even.");
    }
    else
    {
        printf("The number is single digit and odd.");
    }
    return 0;
 }