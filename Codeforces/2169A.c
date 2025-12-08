#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    int n;
    scanf("%d",&n);
    int count;
    int alice;
    int scores[300000];
    int slength=0;
    int aindex=0;
    int bob=0;
    for(int i = 0 ; i < n ; i++)
    {
        int j=0;
        int k=0;
        slength=0;
        aindex=0;
        scanf("%d %d",&count,&alice);
        int  mid=count/2;
        for(j = 0;j<count;j++)
        {
            scanf("%d",&scores[j]);
        }
        for(k = 0;k <count;k++)
        {
            if(alice>scores[k])
                aindex++;
            else if(alice<scores[k])    break;
            else if(alice==scores[k])
            {
                aindex=k;
                break;
            }

        }
        int smid;
        if(count%2==0)
        {
            smid=(scores[mid]+scores[mid-1])/2;
            if(aindex>=count/2 && aindex<=count/2+1)
            {
                if(alice==smid)
                    bob=alice;
                else if(alice<smid) bob=scores[aindex];
                else if(alice>smid)  bob=scores[aindex-1];   
            }
            else{
                if(aindex>mid)
                    bob=scores[aindex-1];
                else if (aindex<mid)
                    bob=scores[aindex];
                else bob=alice;
                    

            }
        }
        else{
            smid=scores[mid];
            if(alice>smid)  bob=scores[aindex];
            else if(alice==smid) bob=alice;
            else if(alice<smid) bob=scores[aindex];
        }
        printf("%d\n",bob);
    }
    

    return 0;

}