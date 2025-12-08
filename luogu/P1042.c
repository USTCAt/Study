#include<stdio.h>
#include<stdlib.h>

int main()
{
    char result;
    int win=0;
    int lose=0;
    int index=0;
    char twentyone[25*2502];
    while((result=getchar())!='E')
    {
        if(result == '\n' || result == ' ' || result == '\t') {
            continue;
        }
        twentyone[index++]=result;
        if(result=='W')
        {
            win++;
        }
        else if (result=='L')
        {
            lose++;
            
        }
        // printf("第%d场：胜：%d负：%d\n",index,win,lose);
        if((win>=11 || lose>=11) && abs(win-lose)>=2)
        {
            printf("%d:%d\n",win,lose);
            win=0;
            lose=0;  
        }
    }
    printf("%d:%d\n\n",win,lose);
    win=0;
    lose=0;
    for(int i=0;i<index;i++){
        if(twentyone[i]=='W')
        {
            win++;
        }
        else if (twentyone[i]=='L')
        {
            lose++;
            
        }
        if((win>=21 || lose>=21) && abs(win-lose)>=2)
        {
            printf("%d:%d\n",win,lose);
            win=0;
            lose=0;
            
        }
    }
    printf("%d:%d\n",win,lose);
    return 0;
}