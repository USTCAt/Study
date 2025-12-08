#include<stdio.h>
#include<string.h>
int main()
{
    int X=0;
    int l;
    scanf("%d",&l);
    char c[4];
    for(int i = 0;i < l;i++)
    {
        scanf("%s",c);
        for(int j = 0;j < strlen(c);j++)
        {
            if(c[j]=='+')
            {
                X++;
                break;
            }
            if(c[j]=='-')
            {
                X--;
                break;
            }
            
        }
    }
    printf("%d",X);
    return 0;
}