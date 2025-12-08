#include<stdio.h>
int main()
{
    int n,k;
    scanf("%d %d",&n,&k);
    int promoted=0;
    int score[55];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&score[i]);
    }
    for(int j=0;j<n;j++)
    {
        // printf("socre[j]:%d\n",score[j]);
        // printf("score[k]:%d\n",score[k-1]);
        if(score[j]>=score[k-1] && score[j]>0)
            promoted++;
        // printf("permant promoted:%d\n",promoted);
    }
    printf("%d",promoted);
    return 0;
}