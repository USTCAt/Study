#include<stdio.h>
#include<stdlib.h>
int main()
{
    int matrix[6][6];
    int i,j;
    int res;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
            scanf("%d",&matrix[i][j]);
            if(matrix[i][j]==1)
            {       
                res =abs(i-3)+abs(j-3);
                
            }
        }
        
    }
    printf("%d",res);
    return 0;
}