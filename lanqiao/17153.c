#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int n;
    scanf("%d",&n);
    int stuid[100001]={0};
    int single=0;
    int more=0;
    int hashmap[100001]={0};
    for(int i=0;i < n;i++)
    {
        scanf("%d",&stuid[i]);
        if(hashmap[stuid[i]]==0)
        {
            single++;
            hashmap[stuid[i]]++;
            printf("hashmap[%d]：%d is single!\n",stuid[i],hashmap[stuid[i]]);
        }
        else if(hashmap[stuid[i]]==1)
        {   
            single--;
            hashmap[stuid[i]]++;
            printf("hashmap[%d]：%d is in pairs\n",stuid[i],hashmap[stuid[i]]);
        }
        else{
            more++;
            printf("hashmap[%d]：%d is more than pairs\n",stuid[i],hashmap[stuid[i]]);
        }
    }
    
    int needtochange=(more+single)/2;
    printf("%d %d %d",single,more,needtochange);    
    return 0;
}