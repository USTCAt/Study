#include <stdio.h>
int main()
{
    int T;
    scanf("%d",&T);
    int i=0,j=0,k=0;
    int cnum;
    int starts=1;
    int ends=1;
    int sum[100001];
    int max_sum=-10000000;
    int current_sum=0;
    for(i=1;i<=T;++i)
    {
        current_sum=0;
        max_sum=-10000000;
        scanf("%d",&cnum);
        starts=1;
        ends=1;
        int final_starts=1;
        int final_ends=1;
        for(j=1;j<=cnum;j++)
        {
            scanf("%d",&sum[j]);
        }
        for(int ends=1;ends<=cnum;ends++)
        {
            current_sum += sum[ends];
            
            if(current_sum > max_sum)
            {
                max_sum = current_sum;
                final_starts = starts;
                final_ends = ends;
            }
            
            if(current_sum < 0)
            {
                current_sum = 0;
                starts = ends + 1;
            }
        }
        printf("Case %d:\n",i);
        printf("%d %d %d\n\n",max_sum,final_starts,final_ends);
        if(i < T) printf("\n"); 
    }
    return 0;
}