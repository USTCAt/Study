#include<stdio.h>
#include<string.h>
int main()
{
    int l;
    char word[100];
    scanf("%d",&l);
    int letter=0;
    for(int i=0;i<l;i++)
    {
        scanf("%s",word);
        letter=0;
        if(strlen(word)>10)
        {
            for(int j=0;j<strlen(word);j++)
            {
                if(j==0) printf("%c",word[j]);
                
                if(j==strlen(word)-1) printf("%d%c\n",letter-1,word[j]);
                letter++;
            }
        }
        else
        {
            for(int k=0;k<strlen(word);k++)
            {
                printf("%c",word[k]);
            }
            printf("\n");
        }
    }
    return 0;
}