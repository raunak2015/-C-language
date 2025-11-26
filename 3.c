// 3. Factorial using recursion
// Input–Output Samples
// Input: 5 Output: 120

// Input: 4 Output: 24

// Input: 1 Output: 1

#include<stdio.h>

int fact(int n){
    if(n==0){
        return 1;
    }
    return n*fact(n-1);
}
int main()
{
    printf("%d",fact(5));
    return 0;
}