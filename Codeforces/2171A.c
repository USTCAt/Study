#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int samples;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&samples);
        int cnt=0;
        if(samples%2==1)
        {
            printf("0\n");
        }
        else if(samples<2)
        {
            printf("0\n");
        }
        else{
            for(int i=0;i<samples;i++)
            {
                for(int j =0;j<samples-i;j++)
                {
                    if(i*2+j*4==samples)
                        cnt++;
                }
            }
            printf("%d\n",cnt);
        }
    }
    return 0;
}