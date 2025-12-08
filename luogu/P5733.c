#include<stdio.h>
#include<string.h>
int main()
{
    char string[101];
    scanf("%s",&string);
    for(int i=0;i<strlen(string);i++)
    {
        if(string[i]>=97 && string[i]<=122)
        {
            printf("%c",string[i]-32);
        }
        else{
            printf("%c",string[i]);
        }
    }
    return 0;
}