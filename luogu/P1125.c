#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int isPrime(int x)
{
    if(x <= 1) return 0;
    if(x == 2) return 1; 
    int i;
    for(i=2;i*i<x;i++)
    {
        if(x%i==0)
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    char word[100];
    scanf("%s",word);
    int length=strlen(word);
    int max=0;
    int min=length;
    char map[256]={0};
    for(int i = 0;i < length;i++)
    {
        map[(int)word[i]]++;
    }
    for(int j = 0;j < 256;j++)
    {
        if(map[j]>0)
        {
            if(map[j]<min) min=map[j];
            if(map[j]>max) max=map[j];
        }
    }
    if(isPrime(max-min))
    {
        printf("Lucky Word\n%d",max-min);
    }
    else{
        printf("No Answer\n0");
    }
    return 0;
}