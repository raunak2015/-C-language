// 2. Print numbers from N to 1 using recursion
// Input–Output Samples
// Input: N = 5 Output: 5 4 3 2 1

// Input: N = 3 Output: 3 2 1

// Input: N = 7 Output: 7 6 5 4 3 2 1

#include <stdio.h>
int print(int n)
{
    if (n == 0)
    {
        return 5;
    }
    printf("%d ",n);
    return print(n-1);
}

int main()
{
    print(8);
    return 0;
}