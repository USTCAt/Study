#include <stdio.h>
void sort(int a[])
{
    int i,j;
    for (i=1;i<=3;i++)
    {
        for(j=i+1;j<=3;j++)
        {
            if(a[j-1]>a[j])
            {
                int temp=a[j];
                a[j]=a[j-1];
                a[j-1]=temp;
            }
        }
    }
}
int main()
{
    int ACI[4];
    scanf("%d %d %d",&ACI[1],&ACI[2],&ACI[3]);
    int max=ACI[1];
    int min=ACI[1];
    for(int i=2;i<=3;i++)
    {
        if(ACI[i]<min)
        {
            min=ACI[i];
        }
        if(ACI[i]>max)
        {
            max=ACI[i];
        }
    }
    
    sort(ACI);
    if(max-min>=10)
    {
        printf("check again");
    }
    else{
        printf("final %d",ACI[2]);
    }
    
    return 0;
}