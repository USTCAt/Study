/*
Sum Problem
Time Limit: 1000/500 MS (Java/Others)    Memory Limit: 65536/32768 K (Java/Others)
Total Submission(s): 793327    Accepted Submission(s): 202852


Problem Description
Hey, welcome to HDOJ(Hangzhou Dianzi University Online Judge).

In this problem, your task is to calculate SUM(n) = 1 + 2 + 3 + ... + n.
 

Input
The input will consist of a series of integers n, one integer per line.
 

Output
For each case, output SUM(n) in one line, followed by a blank line. You may assume the result will be in the range of 32-bit signed integer.
 

Sample Input
1
100
 

Sample Output
1

5050
*/
#include<stdio.h>
int main()
{
    int n;
    long long sum;

    while(scanf("%d",&n)!=EOF)
    {
        if(n<=0)
        {
            printf("0\n\n");
            continue;
        }
        sum=(1LL+n)*n/2;
        printf("%lld\n\n",sum);
    }
    return 0;
}