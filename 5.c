// 5. Sum of digits using recursion
// Input–Output Samples
// Input: 523 Output: 10

// Input: 409 Output: 13

// Input: 1005 Output: 6

#include <stdio.h>
int sumOfDigit(int n)
{
    if (n == 0)
    {
        return 0;
    }
    return n % 10 + sumOfDigit(n / 10);
}
int main()
{
    printf("%d", sumOfDigit(523));
    return 0;
}