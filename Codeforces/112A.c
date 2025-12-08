#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main()
{
    char str1[100];
    char str2[100];
    scanf("%s",str1);
    scanf("%s",str2);
    int i,j;
    int status1=0;
    int status2=0;

    for(i=0;i<strlen(str1);i++)
    {
        str1[i]=tolower(str1[i]);
        str2[i]=tolower(str2[i]);
        if((int)str2[i]>(int)str1[i])
        {
            printf("-1\n");
            return 0;
        }
        else if((int)str2[i]<(int)str1[i])
        {
            printf("1\n");
            return 0;
        }
    }
    printf("0\n");
    
    
    return 0;

}