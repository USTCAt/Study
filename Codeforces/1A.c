#include<stdio.h>
int main()
{
    int m,n;
    int a;
    scanf("%d %d %d",&m,&n,&a);
    int length=a;
    int height=a;
    while(length<m)
    {
        length+=a;
    }
    while(height<n)
    {
        height+=a;
    }
    long long tiles_x = (m + a - 1LL) / a;
    long long tiles_y = (n + a - 1LL) / a;
    
    printf("%lld\n", tiles_x * tiles_y);
    return 0;
}