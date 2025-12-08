#include<stdio.h>
#include<string.h>
int main ()
{
    int n;
    scanf("%d",&n);
    char code[51];
    scanf("%s",code);
    for(int i=0;i<strlen(code);i++)
    {
        if(code[i]+n>122)
        {
            printf("%c",code[i]+n-26);
        }
        else{
            printf("%c",code[i]+n);
        }
    }
    return 0;
}