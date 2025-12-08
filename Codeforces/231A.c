#include<stdio.h>
int main()
{
    int l;
    scanf("%d",&l);
    int solution=0;
    int petya;
    int vasya;
    int tonya;
    for(int i = 0;i < l; i++)
    {
        scanf("%d %d %d",&petya,&vasya,&tonya);
        if(petya+vasya+tonya>=2)
        {
            solution++;
        }  
    }
    printf("%d",solution);
    return 0;
}