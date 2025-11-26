// 1. Print numbers from 1 to N using recursion
// Input–Output Samples
// Input: N = 5 Output: 1 2 3 4 5

// Input: N = 3 Output: 1 2 3

// Input: N = 1 Output: 1

#include<stdio.h>
void print(int num){
    if (num==0)
    {
        return;
    }
    print(num-1);
    printf("%d  ",num);
}
int main()
{
  print(9);
    return 0;
}