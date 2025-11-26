// 4. Fibonacci series up to N terms
// Input–Output Samples
// Input: N = 5 Output: 0 1 1 2 3

// Input: N = 7 Output: 0 1 1 2 3 5 8

// Input: N = 3 Output: 0 1 1

#include <stdio.h>
int fib(int n)
{
    if (n == 0)
    {
        return 0;
    }
    else if (n == 1)
    {
        return 1;
    }
    return fib(n-1) + fib(n-2);
}
int main()
{
    int n=5;
    for (int i = 0; i < n; i++)
    {
        printf("%d  ", fib(i));
    }
    
    return 0;
}