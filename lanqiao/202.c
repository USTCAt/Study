#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int cmp(const void *a, const void *b) {
    return strcmp((char*)a, (char*)b);
}

int main(int argc, char *argv[])
{
    char str1[100];
    char str2[100];
    scanf("%s",str1);
    scanf("%s",str2);
    int len1=strlen(str1);
    int len2=strlen(str2);
    qsort(str1, len1, sizeof(char), cmp);
    qsort(str2, len2, sizeof(char), cmp);
    for(int i=0;i<len2;i++)
    {
        printf("%c",str1[i]);
    }
    for(int i=0;i<len2;i++)
    {
        printf("%c",str2[i]);
    }   
    return 0;
}